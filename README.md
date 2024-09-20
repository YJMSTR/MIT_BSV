# Bluespec SystemVerilog(BSV) 及 MIT 体系结构公开课 笔记

## 前言

早年 MIT 有三门用 bsv 作为硬件描述语言的体系结构课程，代号分别为 6.004，6.175 和 6.375. 根据 MIT CS course list，现在这三门课分别改名为了 6.1910、6.1920 和 6.5900. 本文是自学这三门课所需的 bsv 时记录的笔记，内容主要来源于这三门课目前公开的资料（6.175 16fall, 6.375 19fall）。

## 环境配置

在 windows11 wsl2-ubuntu22.04 和 ArchLinux 上均搭建了实验环境，通过 Git 进行多端开发。

ArchLinux 上通过 `yay -S bluespec-git` 构建 bsc 时 GHC 会报错，考虑到后续需要使用 Connectal，ArchLinux 对 Connectal 的支持不完善，此处采用 [kazutoiris 的 docker 镜像](https://github.com/kazutoiris/MIT6.175) 进行实验。

在用 docker 做 6.375lab3 的 p2 时，会报错缺少 fft3w，暂时先不用 docker 做，做完以后再用 docker

## 6.175

### lab5

和 ysyx 差不多，从单周期开始，写到多周期，再到两级流水，再到两级 BTB. 

2016 版的 lab5 用 Scemi 仿真，2017 版用 connectal。这里我们做 2017 版的 lab5。

执行 `bash init.sh` 时可能会报错 “RPC failed; curl 92 HTTP/2 stream 0 was not closed cleanly: CANCEL (err 8)”，开全局代理 + 执行下述命令后暂时解决：`git config --global http.postBuffer 524288000`。

随后脚本会使用 curl 下载 ply-3.9.tar.gz，但脚本中的链接已经失效，我们可以手动从 `https://github.com/dabeaz/archive/blob/main/ply/ply-3.9.tar.gz` 下载。此外，脚本会将 connectal 中的 `python script` 全部替换为 `python2.7 script`，但最新拉下来的 connectal 文件夹里的 Makefile 用得其实是 python3 script。这里要么把 ply 和 py 都改用最新版（没试过），要么全部对齐到实验当年的版本。我的选择是把 python3 改回 python2.7

由于 bsc 版本问题，实验代码的一些部分需要修改以后才能跑通，例如 tagged Valid 要改为 tagged Valid False，并修改相应寄存器的类型从 Maybe#(void) 改为 Maybe#(Bool)。

lab5 初始代码缺少 simple.S，并且 Makefile 中的工具链路径需要手动修改一下。此处通过 apt 安装交叉编译工具链，并把 Makefile 中的路径改成 /usr/bin/ 下的路径，上网扒了个 Simple.S 过来。

实验自带的 Makefile 中传递了 -m32 参数给交叉编译工具链，但现在 GCC 和 RISC-V Spec 的版本均已更新，I 扩展中也不再包含 Zicsr 指令，需要写 `-march=rv32i_zicsr` 代替，并去掉 -m32，此外若编译工具链时使用的 abi 不是 ilp32, 则需要加上 `-mabi=ilp32` 选项。

配置好交叉编译工具链后，make 会报错缺少 mtohost 这个 CSR，mtohost 并不属于 RISC-V 标准（曾经是非标准 HTIF 的一部分，现在已经被移除了），主要是用于测试。我们需要把 mtohost 换成别的 CSR。后续要读出时，也要把 mfromhost 换成对应的 CSR。

自行编译的工具链不带有 elf2hex 工具，可以 git clone git://github.com/sifive/elf2hex.git 下载。

## 6.375

### lab2

#### dlopen 报错

做 6.375 的 lab2 时，按照讲义 make simulation 随后 ./out 报了如下错误：

```
Error: dlopen: ./out.so: undefined symbol: _Z12dollar_fopenPKcPKSsS2_
    invoked from within
"sim load $model_name $top_module"
    (file "/opt/tools/bsc/lib/tcllib/bluespec/bluesim.tcl" line 188)
```

上网搜到[如下帖子](https://github.com/B-Lang-org/bsc/issues/704)后按照帖子里的方法添加 `-ffat-lto-objects` 参数重新编译 bsc，还是会报这个错误。

解决方法：在 BluespecSV-CN 交流群里问群友得知，可以将 bscflags 的 `-Xc++ -D_GLIBCXX_USE_CXX11_ABI=0` 删掉，或者将 0 改为 1 即可。

### lab3

#### p2 ref.c

没看懂 p2 要干嘛，意思是要根据 ref.c 造一组新测例喂给 bsv？暂时跳过

#### ToMP & FromMP

实现流水线中的 ToMP 和 FromMP 模块，用 Cordic 算法转换直角坐标和极坐标。Cordic 的代码已经给我们了，直接调用就行。

写完以后往流水线里加三个模块。

最终结果和期望结果在 char 15 line 1 不同。上 Github 扒了个其他人写好的代码跑了一下，也是这样。暂时认为实现是正确的。

### lab4

#### connectal

用 Docker 做。如果直接用非 root 账户 make simulation，可能会遇到权限不足的问题。这种情况下可以在启动容器时指定 `-root` 选项切换到 root 账户做。

p1 make simulation 的结果和期望结果在 char 15 line 1 不同，和 lab3 的结果在 char 787 line 1 处不同。

用到 FPGA 的实验部分暂时跳过，但还是扫一眼讲义中的内容。`(* synthesize*)` 可以让编译器不内联某个模块，而是为该模块生成单独的文件和模块。

多态模块前面不能直接加 `(* synthesize *)`，这是由于 Verilog 不支持多态。因此我们需要在多态模块所使用到的各个非多态模块前面加 `(* synthesize *)`。需要注意的是，如果一个模块加了 provisos 就不能 synthesize 了。

connectal 仅支持 Bit#(n) 类型的信号，因此需要把 FixedPoint#(16, 16) 转换成 Bit#(32) 才能在 connectal 中使用。调用硬件中的方法时可以把 Bit#(32) 通过 unpack 转换为 FixedPoint#(16, 16)，硬件返回的 FixedPoint#(16, 16) 结果可以通过 pack 转换为 Bit#(32)。

unpack 的作用是将 Bit 表示转换为其它 Bluespec 中的类型。

做完 p7 跑 make run_simulation 会报错，改用直接执行 ubuntu.exe 的方式可以运行并跑出 out.pcm，但仿真结束时会出现 `[sock_fd_write:184] error in sendmsg -1 104
xsim_disconnect:75 pint=0x7761f8001000 calling $finish
Aborted (core dumped)`


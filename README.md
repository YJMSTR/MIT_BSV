# Bluespec SystemVerilog(BSV) 及 MIT 体系结构公开课 笔记

## 前言

早年 MIT 有三门用 bsv 作为硬件描述语言的体系结构课程，代号分别为 6.004，6.175 和 6.375. 根据 MIT CS course list，现在这三门课分别改名为了 6.1910、6.1920 和 6.5900. 本文是自学这三门课所需的 bsv 时记录的笔记，内容主要来源于这三门课目前公开的资料（6.175 16fall, 6.375 19fall）。

## 环境配置

在 windows11 wsl2-ubuntu22.04 和 ArchLinux 上均搭建了实验环境，通过 Git 进行多端开发。

ArchLinux 上通过 `yay -S bluespec-git` 构建 bsc 时 GHC 会报错，考虑到后续需要使用 Connectal，ArchLinux 对 Connectal 的支持不完善，此处采用 [kazutoiris 的 docker 镜像](https://github.com/kazutoiris/MIT6.175) 进行实验。

在用 docker 做 6.375lab3 的 p2 时，会报错缺少 fft3w，暂时先不用 docker 做，做完以后再用 docker

## 6.175

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

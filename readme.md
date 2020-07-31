
## gcc 版本

``` shell script
Franks-Mac:playGCC frank$ gcc --version
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/4.2.1
Apple clang version 11.0.3 (clang-1103.0.32.29)
Target: x86_64-apple-darwin19.4.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
Franks-Mac:playGCC frank$ ll /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
total 259944
drwxr-xr-x  100 root  wheel   3.1K Mar 26 10:47 .
drwxr-xr-x    8 root  wheel   256B Mar 10 09:53 ..
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-ar
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-as
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-libtool
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-link
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-lld
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-nm
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-objdump
lrwxr-xr-x    1 root  wheel     6B Mar 23 15:27 air-ranlib -> air-ar
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-readobj
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 air-size
-rwxr-xr-x    1 root  wheel    41K Mar 10 09:59 ar
-rwxr-xr-x    1 root  wheel    40K Mar 10 09:59 as
-rwxr-xr-x    1 root  wheel    27K Mar 10 09:59 asa
-rwxr-xr-x    1 root  wheel   216K Mar 10 09:59 bison
-rwxr-xr-x    1 root  wheel   163K Mar 10 09:59 bitcode_strip
lrwxr-xr-x    1 root  wheel     5B Mar 23 15:27 c++ -> clang
lrwxr-xr-x    1 root  wheel    12B Mar 26 10:43 c++filt -> llvm-cxxfilt
-rwxr-xr-x    1 root  wheel    31K Mar 10 09:59 c89
-rwxr-xr-x    1 root  wheel    31K Mar 10 09:59 c99
lrwxr-xr-x    1 root  wheel     5B Mar 23 15:27 cc -> clang
-rwxr-xr-x    1 root  wheel    84M Mar 10 09:59 clang
lrwxr-xr-x    1 root  wheel     5B Mar 23 15:27 clang++ -> clang
-rwxr-xr-x    1 root  wheel    35M Mar 10 09:59 clangd
-rwxr-xr-x    1 root  wheel   125K Mar 10 09:59 cmpdylib
-rwxr-xr-x    1 root  wheel   159K Mar 10 09:59 codesign_allocate
lrwxr-xr-x    1 root  wheel    17B Mar 23 15:27 codesign_allocate-p -> codesign_allocate
-rwxr-xr-x    1 root  wheel   8.0M Mar 10 09:59 coremlcompiler
-rwxr-xr-x    1 root  wheel   3.3K Dec 14  2019 cpp
-rwxr-xr-x    1 root  wheel    36K Mar 10 09:59 ctags
-rwxr-xr-x    1 root  wheel   154K Mar 10 09:59 ctf_insert
-rwxr-xr-x    1 root  wheel    31M Mar 10 09:59 dsymutil
lrwxr-xr-x    1 root  wheel    14B Mar 23 15:27 dwarfdump -> llvm-dwarfdump
-rwxr-xr-x    1 root  wheel   477K Mar 10 09:59 dwarfdump-classic
-rwxr-xr-x    1 root  wheel   211K Mar 10 09:59 dyldinfo
-rwxr-xr-x    1 root  wheel   580K Mar 10 09:59 flex
-rwxr-xr-x    1 root  wheel   580K Mar 10 09:59 flex++
lrwxr-xr-x    1 root  wheel     8B Mar 23 15:27 gcov -> llvm-cov
-rwxr-xr-x    1 root  wheel   148K Mar 10 09:59 gm4
-rwxr-xr-x    1 root  wheel    98K Mar 10 09:59 gperf
-rwxr-xr-x    1 root  wheel    77K Mar 10 09:59 iig
-rwxr-xr-x    1 root  wheel    73K Mar 10 09:59 indent
-rwxr-xr-x    1 root  wheel   142K Mar 10 09:59 install_name_tool
-rwxr-xr-x    1 root  wheel   2.6M Mar 10 09:59 ld
-rwxr-xr-x    1 root  wheel   230B Dec 14  2019 lex
-rwxr-xr-x    1 root  wheel   164K Mar 10 09:59 libtool
-rwxr-xr-x    1 root  wheel    73K Mar 10 09:59 lipo
-rwxr-xr-x    1 root  wheel   3.8M Mar 10 09:59 llvm-cov
-rwxr-xr-x    1 root  wheel   355K Mar 10 09:59 llvm-cxxfilt
-rwxr-xr-x    1 root  wheel   8.3M Mar 10 09:59 llvm-dwarfdump
-rwxr-xr-x    1 root  wheel    10M Mar 10 09:59 llvm-nm
-rwxr-xr-x    1 root  wheel    12M Mar 10 09:59 llvm-objdump
-rwxr-xr-x    1 root  wheel    40K Mar 10 09:59 llvm-otool
-rwxr-xr-x    1 root  wheel   1.6M Mar 10 09:59 llvm-profdata
-rwxr-xr-x    1 root  wheel   3.1M Mar 10 09:59 llvm-size
-rwxr-xr-x    1 root  wheel   3.5K Dec 14  2019 lorder
-rwxr-xr-x    1 root  wheel   148K Mar 10 09:59 m4
-rwxr-xr-x    1 root  wheel    81K Mar 10 09:59 metal
lrwxr-xr-x    1 root  wheel     6B Mar 23 15:27 metal-ar -> air-ar
lrwxr-xr-x    1 root  wheel     6B Mar 23 15:27 metal-as -> air-as
lrwxr-xr-x    1 root  wheel    11B Mar 23 15:27 metal-libtool -> air-libtool
lrwxr-xr-x    1 root  wheel     8B Mar 23 15:27 metal-link -> air-link
lrwxr-xr-x    1 root  wheel     6B Mar 23 15:27 metal-nm -> air-nm
lrwxr-xr-x    1 root  wheel    11B Mar 23 15:27 metal-objdump -> air-objdump
lrwxr-xr-x    1 root  wheel    10B Mar 23 15:27 metal-ranlib -> air-ranlib
lrwxr-xr-x    1 root  wheel    11B Mar 23 15:27 metal-readobj -> air-readobj
lrwxr-xr-x    1 root  wheel     8B Mar 23 15:27 metal-size -> air-size
lrwxr-xr-x    1 root  wheel     7B Mar 23 15:27 metallib -> air-lld
-rwxr-xr-x    1 root  wheel   7.7K Dec 14  2019 mig
lrwxr-xr-x    1 root  wheel     7B Mar 23 15:27 nm -> llvm-nm
-rwxr-xr-x    1 root  wheel   142K Mar 10 09:59 nm-classic
-rwxr-xr-x    1 root  wheel   171K Mar 10 09:59 nmedit
lrwxr-xr-x    1 root  wheel    12B Mar 23 15:27 objdump -> llvm-objdump
lrwxr-xr-x    1 root  wheel    10B Mar 23 15:27 otool -> llvm-otool
-rwxr-xr-x    1 root  wheel   648K Mar 10 09:59 otool-classic
-rwxr-xr-x    1 root  wheel   138K Mar 10 09:59 pagestuff
lrwxr-xr-x    1 root  wheel     7B Mar 23 15:27 ranlib -> libtool
-rwxr-xr-x    1 root  wheel    85K Mar 10 09:59 rpcgen
-rwxr-xr-x    1 root  wheel    52K Mar 10 09:59 segedit
lrwxr-xr-x    1 root  wheel    12B Mar 23 15:27 size -> size-classic
-rwxr-xr-x    1 root  wheel   125K Mar 10 09:59 size-classic
-rwxr-xr-x    1 root  wheel   8.3M Mar 10 09:59 sourcekit-lsp
-rwxr-xr-x    1 root  wheel   126K Mar 10 09:59 strings
-rwxr-xr-x    1 root  wheel   197K Mar 10 09:59 strip
-rwxr-xr-x    1 root  wheel    91M Mar 10 09:59 swift
-rwxr-xr-x    1 root  wheel   9.2M Mar 10 09:59 swift-build
-rwxr-xr-x    1 root  wheel   701K Mar 10 09:59 swift-build-tool
-rwxr-xr-x    1 root  wheel   694K Mar 10 09:59 swift-demangle
-rwxr-xr-x    1 root  wheel   9.2M Mar 10 09:59 swift-package
-rwxr-xr-x    1 root  wheel   9.2M Mar 10 09:59 swift-run
-rwxr-xr-x    1 root  wheel    61K Mar 10 09:59 swift-stdlib-tool
-rwxr-xr-x    1 root  wheel   9.2M Mar 10 09:59 swift-test
lrwxr-xr-x    1 root  wheel     5B Mar 23 15:27 swiftc -> swift
-rwxr-xr-x    1 root  wheel    12M Mar 10 09:59 tapi
-rwxr-xr-x    1 root  wheel    41K Mar 10 09:59 unifdef
-rwxr-xr-x    1 root  wheel   2.9K Dec 14  2019 unifdefall
-rwxr-xr-x    1 root  wheel    63K Mar 10 09:59 unwinddump
-rwxr-xr-x    1 root  wheel    49K Mar 10 09:59 vtool
-rwxr-xr-x    1 root  wheel   135B Dec 14  2019 yacc

```
## gcc 指定编译语言
```shell script
 gcc -xc++ -lstdc++ -shared-libgcc dynamic.c

```

## gcc 编译标准
借助 -std 选项即可手动控制 GCC 编译程序时所使用的编译标准

C语言常用标准

GCC 版本|C语言常用标准:C89/C90	|C99|	C11|	C17|	GNU90|	GNU99|	GNU11|	GNU17
----|----|----|----|----|----|----|----|----
10.1 ~ 8.4|	c89 / c90|	c99|	c11|	c17/c18|	gnu90/gnu89|	gnu99|	gnu11|	gnu17/gnu18
7.5 ~ 5.5|	c89/c90	|c99|	c11	| -	|gnu90/gnu89	|gnu99	|gnu11	 |-
4.9.4 ~ 4.8.5|	c89/c90|	c99|	c11	 |-|	gnu90/gnu89|	gnu99|	gnu11	 |-
4.7.4|	c89/c90	|c99（部分支持）|	c11（部分支持）	|-| 	gnu90/gnu89	|gnu99（部分支持）|	gnu11（部分支持）	 |-
4.6.4	|c89/c90	|c99（部分支持）|	c1x（部分支持）|-	| 	gnu90/gnu89	|gnu99（部分支持）|	gnu1x（部分支持）|-	 
4.5.4	|c89/c90 |	c99（部分支持）|	- |-|	 	gnu90/gnu89|	gnu99（部分支持）	| -|-	 

表头表示的是各个编译标准的名称，而表格内部的则为 -std 可用的值，例如 -std=c89、-std=c11、-std=gnu90

```shell script
Franks-Mac:playGCC frank$ gcc -std=c99 test_compiler.c -o test_compiler
Franks-Mac:playGCC frank$ ./test_compiler 
i=0 i=1 i=2 i=3 i=4 i=5 i=6 i=7 i=8 i=9 Franks-Mac:playGCC frank$ 

Franks-Mac:playGCC frank$ gcc -std=c89 test_compiler.c -o test_compiler
test_compiler.c:3:9: warning: GCC does not allow variable declarations in for loop initializers before C99 [-Wgcc-compat]
    for(int i=0;i<10;i++){
        ^
1 warning generated.
Franks-Mac:playGCC frank$ 

```

C 或者 C++ 程序从源代码生成可执行程序的过程，需经历 4 个过程，分别是预处理、编译、汇编和链接。

 GCC常用的编译选项

gcc/g++指令选项|	功 能
----|----
-E（大写）|	预处理指定的源文件，不进行编译。
-S（大写）|	编译指定的源文件，但是不进行汇编。
-c	|编译、汇编指定的源文件，但是不进行链接。
-o	|指定生成文件的文件名。
-llibrary（-I library）|	其中 library 表示要搜索的库文件的名称。该选项用于手动指定链接环节中程序可以调用的库文件。建议 -l 和库文件名之间不使用空格，比如 -lstdc++。
-ansi	|对于 C 语言程序来说，其等价于 -std=c90；对于 C++ 程序来说，其等价于 -std=c++98。
-std=	|手动指令编程语言所遵循的标准，例如 c89、c90、c++98、c++11 等。

所谓预处理操作，主要是处理那些源文件和头文件中以 # 开头的命令（比如 #include、#define、#ifdef 等），并删除程序中所有的注释 // 和 /* ... */。

```shell script
 gcc -E hello.c -o hello.i
```

为 gcc 指令再添加一个 -C 选项，阻止 GCC 删除源文件和头文件中的注释
```shell script
 gcc -E -C hello.c -o hellonotdelete.i
```


## gcc 版本

``` shell script
Franks-Mac:playGCC frank$ gcc --version
Configured with: --prefix=/Applications/Xcode.app/Contents/Developer/usr --with-gxx-include-dir=/Applications/Xcode.app/Contents/Developer/Platforms/MacOSX.platform/Developer/SDKs/MacOSX.sdk/usr/include/c++/4.2.1
Apple clang version 11.0.3 (clang-1103.0.32.29)
Target: x86_64-apple-darwin19.4.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
# 看下Xcode工具链目录下都有啥
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

## 编译过程
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

### 预处理
所谓预处理操作，主要是处理那些源文件和头文件中以 # 开头的命令（比如 #include、#define、#ifdef 等），并删除程序中所有的注释 // 和 /* ... */。

```shell script
 gcc -E hello.c -o hello.i
```

为 gcc 指令再添加一个 -C 选项，阻止 GCC 删除源文件和头文件中的注释
```shell script
 gcc -E -C hello.c -o hellonotdelete.i
```

### 编译
所谓编译，简单理解就是将预处理得到的程序代码，经过一系列的词法分析、语法分析、语义分析以及优化，加工为当前机器支持的汇编代码。

gcc -S 指令可以操作预处理后的 .i 文件，也可以操作源代码文件：
- 如果操作对象为 .i 文件，则 GCC 编译器只需编译此文件；
- 如果操作对象为 .c 或者 .cpp 源代码文件，则 GCC 编译器会对其进行预处理和编译这 2 步操作。

```shell script
Franks-Mac:playGCC frank$ gcc -S hello.i -o hello.s
Franks-Mac:playGCC frank$ cat hello.s 
        .section        __TEXT,__text,regular,pure_instructions
        .build_version macos, 10, 15    sdk_version 10, 15, 4
        .globl  _main                   ## -- Begin function main
        .p2align        4, 0x90
_main:                                  ## @main
        .cfi_startproc
## %bb.0:
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset %rbp, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register %rbp
        subq    $16, %rsp
        movl    $0, -4(%rbp)
        leaq    L_.str(%rip), %rdi
        callq   _puts
        xorl    %ecx, %ecx
        movl    %eax, -8(%rbp)          ## 4-byte Spill
        movl    %ecx, %eax
        addq    $16, %rsp
        popq    %rbp
        retq
        .cfi_endproc
                                        ## -- End function
        .section        __TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
        .asciz  "hello world"


.subsections_via_symbols
```

```shell script
Franks-Mac:playGCC frank$ gcc -S hello.c -fverbose-asm -o hellodetail.s
Franks-Mac:playGCC frank$ cat hellodetail.s 
        .section        __TEXT,__text,regular,pure_instructions
        .build_version macos, 10, 15    sdk_version 10, 15, 4
        .globl  _main                   ## -- Begin function main
        .p2align        4, 0x90
_main:                                  ## @main
        .cfi_startproc
## %bb.0:
        pushq   %rbp
        .cfi_def_cfa_offset 16
        .cfi_offset %rbp, -16
        movq    %rsp, %rbp
        .cfi_def_cfa_register %rbp
        subq    $16, %rsp
        movl    $0, -4(%rbp)
        leaq    L_.str(%rip), %rdi
        callq   _puts
        xorl    %ecx, %ecx
        movl    %eax, -8(%rbp)          ## 4-byte Spill
        movl    %ecx, %eax
        addq    $16, %rsp
        popq    %rbp
        retq
        .cfi_endproc
                                        ## -- End function
        .section        __TEXT,__cstring,cstring_literals
L_.str:                                 ## @.str
        .asciz  "hello world"


.subsections_via_symbols

```

### 汇编
汇编其实就是将汇编代码转换成可以执行的机器指令。大部分汇编语句对应一条机器指令，有的汇编语句对应多条机器指令。
相对于编译操作，汇编过程会简单很多，它并没有复杂的语法，也没有语义，也不需要做指令优化，只需要根据汇编语句和机器指令的对照表一一翻译即可。
```shell script
Franks-Mac:playGCC frank$ gcc -c hello.s 
Franks-Mac:playGCC frank$ ll
total 520
drwxr-xr-x  21 frank  staff   672B Aug  4 14:29 .
drwxr-xr-x  81 frank  staff   2.5K Jul 31 18:53 ..
drwxr-xr-x  12 frank  staff   384B Aug  4 10:03 .git
-rw-r--r--   1 frank  staff     6B Jul 31 18:11 .gitignore
drwxr-xr-x   8 frank  staff   256B Aug  4 10:45 .idea
-rwxr-xr-x   1 frank  staff    23K Jul 31 11:45 a.out
-rw-r--r--   1 frank  staff   158B Jul 31 11:39 dynamic.c
-rw-r--r--   1 frank  staff   158B Jul 31 11:39 dynamic.cpp
-rwxr-xr-x   1 frank  staff    12K Jul 30 16:37 hello
-rw-r--r--   1 frank  staff    71B Jul 30 16:37 hello.c
-rwxr-xr-x   1 frank  staff    12K Jul 30 16:37 hello.exe
-rw-r--r--   1 frank  staff    27K Jul 31 18:03 hello.i
-rw-r--r--   1 frank  staff   776B Aug  4 14:29 hello.o
-rw-r--r--   1 frank  staff   758B Aug  4 14:20 hello.s
-rw-r--r--   1 frank  staff   758B Aug  4 14:25 hellodetail.s
-rw-r--r--   1 frank  staff   102K Jul 31 18:05 hellonotdelete.i
drwxr-xr-x  10 frank  staff   320B Aug  4 10:36 link
-rw-r--r--   1 frank  staff   167B Jul 31 11:32 notformatc.c
-rw-r--r--   1 frank  staff    18K Aug  4 14:28 readme.md
-rwxr-xr-x   1 frank  staff    12K Jul 31 16:45 test_compiler
-rw-r--r--   1 frank  staff    92B Jul 31 16:42 test_compiler.c
Franks-Mac:playGCC frank$ cat hello.o
��� ��(�__text__TEXT((��__cstring__TEXT(
                                        P__compact_unwind__LD8 `�__eh_frame__TEXTX@�
                                                                                    h2

��
  PUH��H���E�H�=�1ɉE���H��]�hello world(zRx
-_puts_mainFranks-Mac:playGCC frank$      �$��������(A�C

```

### 链接
链接器把多个二进制的目标文件（object file）链接成一个单独的可执行文件。在链接过程中，它必须把符号（变量名、函数名等一些列标识符）用对应的数据的内存地址（变量地址、函数地址等）替代，以完成程序中多个模块的外部引用。

而且，链接器也必须将程序中所用到的所有C标准库函数加入其中。对于链接器而言，链接库不过是一个具有许多目标文件的集合，它们在一个文件中以方便处理。

当把程序链接到一个链接库时，只会链接程序所用到的函数的目标文件。在已编译的目标文件之外，如果创建自己的链接库，可以使用 ar 命令。

标准库的大部分函数通常放在文件 libc.a 中（文件名后缀.a代表“achieve”，译为“获取”），或者放在用于共享的动态链接文件 libc.so 中（文件名后缀.so代表“share object”，译为“共享对象”）。
这些链接库一般位于 /lib/ 或 /usr/lib/，或者位于 GCC 默认搜索的其他目录。

当使用 GCC 编译和链接程序时，GCC 默认会链接 libc.a 或者 libc.so，但是对于其他的库（例如非标准库、第三方库等），就需要手动添加。

令人惊讶的是，标准头文件 <math.h> 对应的数学库默认也不会被链接，如果没有手动将它添加进来，就会发生函数未定义错误。

```shell script
Franks-Mac:playGCC frank$ gcc playCos.c 
Franks-Mac:playGCC frank$ ll
total 520
drwxr-xr-x  22 frank  staff   704B Aug  4 14:40 .
drwxr-xr-x  81 frank  staff   2.5K Jul 31 18:53 ..
drwxr-xr-x  12 frank  staff   384B Aug  4 14:36 .git
-rw-r--r--   1 frank  staff     6B Jul 31 18:11 .gitignore
drwxr-xr-x   8 frank  staff   256B Aug  4 10:45 .idea
-rwxr-xr-x   1 frank  staff    12K Aug  4 14:40 a.out
-rw-r--r--   1 frank  staff   158B Jul 31 11:39 dynamic.c
-rw-r--r--   1 frank  staff   158B Jul 31 11:39 dynamic.cpp
-rwxr-xr-x   1 frank  staff    12K Jul 30 16:37 hello
-rw-r--r--   1 frank  staff    71B Jul 30 16:37 hello.c
-rwxr-xr-x   1 frank  staff    12K Jul 30 16:37 hello.exe
-rw-r--r--   1 frank  staff    27K Jul 31 18:03 hello.i
-rw-r--r--   1 frank  staff   776B Aug  4 14:29 hello.o
-rw-r--r--   1 frank  staff   758B Aug  4 14:20 hello.s
-rw-r--r--   1 frank  staff   758B Aug  4 14:25 hellodetail.s
-rw-r--r--   1 frank  staff   102K Jul 31 18:05 hellonotdelete.i
drwxr-xr-x  10 frank  staff   320B Aug  4 10:36 link
-rw-r--r--   1 frank  staff   167B Jul 31 11:32 notformatc.c
-rw-r--r--   1 frank  staff   229B Aug  4 14:39 playCos.c
-rw-r--r--   1 frank  staff    21K Aug  4 14:39 readme.md
-rwxr-xr-x   1 frank  staff    12K Jul 31 16:45 test_compiler
-rw-r--r--   1 frank  staff    92B Jul 31 16:42 test_compiler.c
Franks-Mac:playGCC frank$ ./a.out 
The cosine of 60.000000 degrees is 0.500000.
Franks-Mac:playGCC frank$ 

```
在支持动态链接的系统上，GCC 自动使用在 Darwin 上的共享链接库 libm.so 或 libm.dylib。

mac下/usr/lib/目录下的东西
```shell script
Franks-Mac:playGCC frank$ ll /usr/lib/libm
libm.dylib         libmecab.dylib     libmenu.5.4.dylib  libmorphun.dylib   libmx.dylib        
libmarisa.dylib    libmecabra.dylib   libmenu.dylib      libmx.A.dylib      
Franks-Mac:playGCC frank$ ll /usr/lib/libm

```

下面手动链接math库
```shell script
Franks-Mac:playGCC frank$ gcc playCos.c -o playCos.out -lm
Franks-Mac:playGCC frank$ 
Franks-Mac:playGCC frank$ ./playCos.out 
The cosine of 60.000000 degrees is 0.500000.

```
数学库的文件名是 libm.a。前缀lib和后缀.a是标准的，m是基本名称，GCC 会在-l选项后紧跟着的基本名称的基础上自动添加这些前缀、后缀，
本例中，基本名称为 m。

通常，GCC 会自动在标准库目录中搜索文件，例如 /usr/lib，如果想链接其它目录中的库，就得特别指明。
有三种方式可以链接在 GCC 搜索路径以外的链接库:

1) 把链接库作为一般的目标文件，为 GCC 指定该链接库的完整路径与文件名。

例如，如果链接库名为 libm.a，并且位于 /usr/lib 目录，那么下面的命令会让 GCC 编译 main.c，然后将 libm.a 链接到 main.o：

    [root@bogon demo]# gcc main.c -o main.out /usr/lib/libm.a


2) 使用-L选项，为 GCC 增加另一个搜索链接库的目录：


    [root@bogon demo]# gcc main.c -o main.out -L/usr/lib -lm

可以使用多个-L选项，或者在一个-L选项内使用冒号分割的路径列表。

3) 把包括所需链接库的目录加到环境变量 LIBRARYPATH 中。

## gcc -o
gcc -o选项用来指定输出文件，如果不使用 -o 选项，那么将采用默认的输出文件。例如默认情况下，生成的可执行文件的名字默认为 a.out。
如下是 gcc -o 指令的使用语法格式：
[root@bogon demo]# gcc [-E|-S|-c] [infile] [-o outfile]

## gcc指令一次处理多个文件
```shell script
[root@bogon demo]# ls
main.c  myfun.c
[root@bogon demo]# gcc *.c -o main.exe
[root@bogon demo]# ls
main.c  main.exe  myfun.c
[root@bogon demo]# ./main.exe
GCC:http://c.biancheng.net/gcc/
```


## 静态链接库
### 自定义头文件的实现

```shell script
Franks-Mac:link frank$ gcc sources/main.c sources/add.c sources/sub.c sources/div.c  -o main.exe
Franks-Mac:link frank$ ll
total 32
drwxr-xr-x   5 frank  staff   160B Aug  4 10:15 .
drwxr-xr-x  18 frank  staff   576B Aug  4 10:01 ..
drwxr-xr-x   3 frank  staff    96B Aug  4 10:03 headers
-rwxr-xr-x   1 frank  staff    12K Aug  4 10:15 main.exe
drwxr-xr-x   6 frank  staff   192B Aug  4 10:15 sources
Franks-Mac:link frank$ ./main.exe 
Input two numbers: 12 32
12+32=44
12-32=-20
12÷32=0

```

### 生成静态连接库
并非任何一个源文件都可以被加工成静态链接库，其至少需要满足以下 2 个条件：
- 源文件中只提供可以重复使用的代码，例如函数、设计好的类等，不能包含 main 主函数；
- 源文件在实现具备模块功能的同时，还要提供访问它的接口，也就是包含各个功能模块声明部分的头文件。

静态链接库的不能随意起名，需遵循的命名规则：libxxx.a
Linux 系统下，静态链接库的后缀名为 .a；Windows 系统下，静态链接库的后缀名为 .lib。
```shell script
Franks-Mac:link frank$ gcc -c sources/sub.c sources/add.c sources/div.c 
Franks-Mac:link frank$ ll
total 56
drwxr-xr-x   8 frank  staff   256B Aug  4 10:23 .
drwxr-xr-x  18 frank  staff   576B Aug  4 10:23 ..
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 add.o
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 div.o
drwxr-xr-x   3 frank  staff    96B Aug  4 10:03 headers
-rwxr-xr-x   1 frank  staff    12K Aug  4 10:15 main.exe
drwxr-xr-x   6 frank  staff   192B Aug  4 10:15 sources
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 sub.o
Franks-Mac:link frank$ cat add.o 
����� 8x�x__text__TEXT��__compact_unwind__LD �P__eh_frame__TEXT8@
                                                                 h2

Xh
 PUH��}��u��E�E�]�zRx
_addFranks-Mac:link frank$ ���A�C
Franks-Mac:link frank$ 
Franks-Mac:link frank$ ar rcs libmyarithmetic.a add.o sub.o div.o 
Franks-Mac:link frank$ ll
total 64
drwxr-xr-x   9 frank  staff   288B Aug  4 10:27 .
drwxr-xr-x  18 frank  staff   576B Aug  4 10:25 ..
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 add.o
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 div.o
drwxr-xr-x   3 frank  staff    96B Aug  4 10:03 headers
-rw-r--r--   1 frank  staff   2.2K Aug  4 10:27 libmyarithmetic.a
-rwxr-xr-x   1 frank  staff    12K Aug  4 10:15 main.exe
drwxr-xr-x   6 frank  staff   192B Aug  4 10:15 sources
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 sub.o

```

上面使用 ar 压缩指令，将生成的目标文件打包成静态链接库，其基本格式如下：

    ar rcs 静态链接库名称 目标文件1 目标文件2 ...

### 使用静态链接库
mac 下
```shell script
Franks-Mac:link frank$ gcc -c sources/main.c 
Franks-Mac:link frank$ ll
total 72
drwxr-xr-x  10 frank  staff   320B Aug  4 10:36 .
drwxr-xr-x  18 frank  staff   576B Aug  4 10:36 ..
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 add.o
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 div.o
drwxr-xr-x   3 frank  staff    96B Aug  4 10:03 headers
-rw-r--r--   1 frank  staff   2.2K Aug  4 10:27 libmyarithmetic.a
-rwxr-xr-x   1 frank  staff    12K Aug  4 10:15 main.exe
-rw-r--r--   1 frank  staff   1.1K Aug  4 10:36 main.o
drwxr-xr-x   6 frank  staff   192B Aug  4 10:15 sources
-rw-r--r--   1 frank  staff   624B Aug  4 10:23 sub.o
   
Franks-Mac:link frank$ gcc -static main.o libmyarithmetic.a 
ld: library not found for -lcrt0.o
clang: error: linker command failed with exit code 1 (use -v to see invocation)

```
这个错误貌似缺少库

ubuntu 下
```shell script
root@evsetrail:~/playGCC/link/sources# ar rcs libmymath.a add.o div.o sub.o
root@evsetrail:~/playGCC/link/sources# gcc -static main.o libmymath.a 
root@evsetrail:~/playGCC/link/sources# ll
total 980
drwxr-xr-x 2 root root   4096 Aug  4 13:56 ./
drwxr-xr-x 4 root root   4096 Aug  4 13:52 ../
-rw-r--r-- 1 root root     72 Aug  4 13:52 add.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 add.o
-rwxr-xr-x 1 root root 958432 Aug  4 13:56 a.out*
-rw-r--r-- 1 root root     71 Aug  4 13:52 div.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 div.o
-rw-r--r-- 1 root root   3972 Aug  4 13:55 libmymath.a
-rw-r--r-- 1 root root    312 Aug  4 13:52 main.c
-rw-r--r-- 1 root root   2240 Aug  4 13:56 main.o
-rw-r--r-- 1 root root     71 Aug  4 13:52 sub.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 sub.o
root@evsetrail:~/playGCC/link/sources# ./a.out 
Input two numbers: 12 6
12+6=18
12-6=6
12÷6=2
root@evsetrail:~/playGCC/link/sources# rm a.out 
root@evsetrail:~/playGCC/link/sources# gcc main.o -static -L ~/playGCC/link/sources/ -lmymath
root@evsetrail:~/playGCC/link/sources# ll
total 980
drwxr-xr-x 2 root root   4096 Aug  4 13:58 ./
drwxr-xr-x 4 root root   4096 Aug  4 13:52 ../
-rw-r--r-- 1 root root     72 Aug  4 13:52 add.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 add.o
-rwxr-xr-x 1 root root 958432 Aug  4 13:58 a.out*
-rw-r--r-- 1 root root     71 Aug  4 13:52 div.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 div.o
-rw-r--r-- 1 root root   3972 Aug  4 13:55 libmymath.a
-rw-r--r-- 1 root root    312 Aug  4 13:52 main.c
-rw-r--r-- 1 root root   2240 Aug  4 13:56 main.o
-rw-r--r-- 1 root root     71 Aug  4 13:52 sub.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 sub.o
root@evsetrail:~/playGCC/link/sources# ./a.out 
Input two numbers: 23 4 
23+4=27
23-4=19
23÷4=5
root@evsetrail:~/playGCC/link/sources# 
```

## 动态链接库
### 生成动态链接库文件
在 Linux 发行版系统中，动态链接库的后缀名通常用 .so 表示；在 Windows 系统中，动态链接库的后缀名为 .dll。
```shell script
Franks-Mac:sources frank$ gcc -fpic -shared add.c sub.c div.c -o libmyarithmetic.so
Franks-Mac:sources frank$ ll
total 88
drwxr-xr-x  12 frank  staff   384B Aug  4 16:22 .
drwxr-xr-x  10 frank  staff   320B Aug  4 10:36 ..
-rw-r--r--   1 frank  staff    72B Aug  4 10:14 add.c
-rw-r--r--   1 frank  staff   624B Aug  4 10:40 add.o
-rw-r--r--   1 frank  staff    71B Aug  4 10:15 div.c
-rw-r--r--   1 frank  staff   624B Aug  4 10:40 div.o
-rw-r--r--   1 frank  staff   2.2K Aug  4 10:41 libmyarithmetic.a
-rwxr-xr-x   1 frank  staff   4.1K Aug  4 16:22 libmyarithmetic.so
-rw-r--r--   1 frank  staff   312B Aug  4 10:15 main.c
-rw-r--r--   1 frank  staff   1.1K Aug  4 10:41 main.o
-rw-r--r--   1 frank  staff    71B Aug  4 10:15 sub.c
-rw-r--r--   1 frank  staff   624B Aug  4 10:40 sub.o
Franks-Mac:sources frank$ 

```
其中，-shared 选项用于生成动态链接库；
-fpic（还可写成 -fPIC）选项的功能是，令 GCC 编译器生成动态链接库（多个目标文件的压缩包）时，表示各目标文件中函数、类等功能模块的地址使用相对地址，而非绝对地址。
这样，无论将来链接库被加载到内存的什么位置，都可以正常使用。

### 使用动态链接库
test.h 头文件并不直接参与编译，因为在程序的预处理阶段，已经对项目中需要用到的头文件做了处理。

mac 下可以执行main.exe
```shell script
Franks-Mac:sources frank$ gcc main.c libmyarithmetic.so -o main.exe
Franks-Mac:sources frank$ ./main.exe 
Input two numbers: 12 6
12+6=18
12-6=6
12÷6=2

```

ubuntu下不可以执行main.exe
```shell script
root@evsetrail:~/playGCC/link/sources# gcc -fpic -shared add.c sub.c div.c -o libmymath.so
root@evsetrail:~/playGCC/link/sources# gcc main.c libmymath.so -o main.exe
root@evsetrail:~/playGCC/link/sources# ll
total 1000
drwxr-xr-x 2 root root   4096 Aug  4 16:33 ./
drwxr-xr-x 4 root root   4096 Aug  4 13:52 ../
-rw-r--r-- 1 root root     72 Aug  4 13:52 add.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 add.o
-rwxr-xr-x 1 root root 958432 Aug  4 13:58 a.out*
-rw-r--r-- 1 root root     71 Aug  4 13:52 div.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 div.o
-rw-r--r-- 1 root root   3972 Aug  4 13:55 libmymath.a
-rwxr-xr-x 1 root root   7552 Aug  4 16:33 libmymath.so*
-rw-r--r-- 1 root root    312 Aug  4 13:52 main.c
-rwxr-xr-x 1 root root   8488 Aug  4 16:33 main.exe*
-rw-r--r-- 1 root root   2240 Aug  4 13:56 main.o
-rw-r--r-- 1 root root     71 Aug  4 13:52 sub.c
-rw-r--r-- 1 root root   1232 Aug  4 13:54 sub.o
root@evsetrail:~/playGCC/link/sources# ./main.exe 
./main.exe: error while loading shared libraries: libmymath.so: cannot open shared object file: No such file or directory
```

通过执行ldd main.exe指令，可以查看当前文件在执行时需要用到的所有动态链接库，以及各个库文件的存储位置：
```shell script
root@evsetrail:~/playGCC/link/sources# ldd main.exe 
        linux-vdso.so.1 (0x00007ffd661bc000)
        libmymath.so => not found
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f24cd048000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f24cd63b000)
root@evsetrail:~/playGCC/link/sources# 

```

运行由动态链接库生成的可执行文件时，必须确保程序在运行时可以找到这个动态链接库。常用的解决方案有如下几种：
- 将链接库文件移动到标准库目录下（例如 /usr/lib、/usr/lib64、/lib、/lib64）；
- 在终端输入export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:xxx，其中 xxx 为动态链接库文件的绝对存储路径（此方式仅在当前终端有效，关闭终端后无效）；
- 修改~/.bashrc 或~/.bash_profile 文件，即在文件最后一行添加export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:xxx（xxx 为动态库文件的绝对存储路径）。保存之后，执行source .bashrc指令（此方式仅对当前登陆用户有效）。

```shell script
root@evsetrail:~/playGCC/link/sources# echo $LD_LIBRARY_PATH

root@evsetrail:~/playGCC/link/sources# pwd
/root/playGCC/link/sources
root@evsetrail:~/playGCC/link/sources# export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:/root/playGCC/link/sources
root@evsetrail:~/playGCC/link/sources# 
root@evsetrail:~/playGCC/link/sources# ./main.exe 
Input two numbers: 12 3
12+3=15
12-3=9
12÷3=4
root@evsetrail:~/playGCC/link/sources# 
root@evsetrail:~/playGCC/link/sources# ldd main.exe 
        linux-vdso.so.1 (0x00007ffffb784000)
        libmymath.so (0x00007f59147ea000)
        libc.so.6 => /lib/x86_64-linux-gnu/libc.so.6 (0x00007f59143f9000)
        /lib64/ld-linux-x86-64.so.2 (0x00007f5914bee000)
root@evsetrail:~/playGCC/link/sources# 


```

linux下/usr/lib/目录下的东西
```shell script
root@evsetrail:~/playGCC/link/sources# ll /usr/lib/gcc/x86_64-linux-gnu/7/
total 84096
drwxr-xr-x 5 root root     4096 Jun 24  2019 ./
drwxr-xr-x 4 root root     4096 Jun 24  2019 ../
-rwxr-xr-x 1 root root 22256464 May  8  2019 cc1*
-rwxr-xr-x 1 root root 23604080 May  8  2019 cc1plus*
-rwxr-xr-x 1 root root   577760 May  8  2019 collect2*
-rw-r--r-- 1 root root     2456 May  8  2019 crtbegin.o
-rw-r--r-- 1 root root     2824 May  8  2019 crtbeginS.o
-rw-r--r-- 1 root root     2976 May  8  2019 crtbeginT.o
-rw-r--r-- 1 root root     1224 May  8  2019 crtend.o
-rw-r--r-- 1 root root     1224 May  8  2019 crtendS.o
-rw-r--r-- 1 root root     3760 May  8  2019 crtfastmath.o
-rw-r--r-- 1 root root     1248 May  8  2019 crtoffloadbegin.o
-rw-r--r-- 1 root root     1248 May  8  2019 crtoffloadend.o
-rw-r--r-- 1 root root     1464 May  8  2019 crtoffloadtable.o
-rw-r--r-- 1 root root     3368 May  8  2019 crtprec32.o
-rw-r--r-- 1 root root     3376 May  8  2019 crtprec64.o
-rw-r--r-- 1 root root     3368 May  8  2019 crtprec80.o
drwxr-xr-x 4 root root     4096 Jun 24  2019 include/
drwxr-xr-x 2 root root     4096 Jun 24  2019 include-fixed/
-rw-r--r-- 1 root root  2925550 May  8  2019 libasan.a
-rw-r--r-- 1 root root    17808 May  8  2019 libasan_preinit.o
lrwxrwxrwx 1 root root       38 May  8  2019 libasan.so -> ../../../x86_64-linux-gnu/libasan.so.4
-rw-r--r-- 1 root root   119194 May  8  2019 libatomic.a
lrwxrwxrwx 1 root root       40 May  8  2019 libatomic.so -> ../../../x86_64-linux-gnu/libatomic.so.1
-rw-r--r-- 1 root root    70210 May  8  2019 libbacktrace.a
lrwxrwxrwx 1 root root       37 May  8  2019 libcc1.so -> ../../../x86_64-linux-gnu/libcc1.so.0
-rw-r--r-- 1 root root   277408 May  8  2019 libcilkrts.a
lrwxrwxrwx 1 root root       41 May  8  2019 libcilkrts.so -> ../../../x86_64-linux-gnu/libcilkrts.so.5
-rw-r--r-- 1 root root      173 May  8  2019 libcilkrts.spec
-rw-r--r-- 1 root root  3003558 May  8  2019 libgcc.a
-rw-r--r-- 1 root root    51748 May  8  2019 libgcc_eh.a
-rw-r--r-- 1 root root      132 May  8  2019 libgcc_s.so
lrwxrwxrwx 1 root root       35 May  8  2019 libgcc_s.so.1 -> /lib/x86_64-linux-gnu/libgcc_s.so.1
-rw-r--r-- 1 root root    58898 May  8  2019 libgcov.a
-rw-r--r-- 1 root root   352114 May  8  2019 libgomp.a
lrwxrwxrwx 1 root root       38 May  8  2019 libgomp.so -> ../../../x86_64-linux-gnu/libgomp.so.1
-rw-r--r-- 1 root root      169 May  8  2019 libgomp.spec
-rw-r--r-- 1 root root   222358 May  8  2019 libitm.a
lrwxrwxrwx 1 root root       37 May  8  2019 libitm.so -> ../../../x86_64-linux-gnu/libitm.so.1
-rw-r--r-- 1 root root      162 May  8  2019 libitm.spec
-rw-r--r-- 1 root root   867742 May  8  2019 liblsan.a
lrwxrwxrwx 1 root root       38 May  8  2019 liblsan.so -> ../../../x86_64-linux-gnu/liblsan.so.0
lrwxrwxrwx 1 root root       22 May  8  2019 liblto_plugin.so -> liblto_plugin.so.0.0.0
lrwxrwxrwx 1 root root       22 May  8  2019 liblto_plugin.so.0 -> liblto_plugin.so.0.0.0
-rw-r--r-- 1 root root    76576 May  8  2019 liblto_plugin.so.0.0.0
-rw-r--r-- 1 root root    25732 May  8  2019 libmpx.a
lrwxrwxrwx 1 root root       37 May  8  2019 libmpx.so -> ../../../x86_64-linux-gnu/libmpx.so.2
-rw-r--r-- 1 root root      156 May  8  2019 libmpx.spec
-rw-r--r-- 1 root root    12100 May  8  2019 libmpxwrappers.a
lrwxrwxrwx 1 root root       45 May  8  2019 libmpxwrappers.so -> ../../../x86_64-linux-gnu/libmpxwrappers.so.2
-rw-r--r-- 1 root root   569496 May  8  2019 libquadmath.a
lrwxrwxrwx 1 root root       42 May  8  2019 libquadmath.so -> ../../../x86_64-linux-gnu/libquadmath.so.0
-rw-r--r-- 1 root root      320 May  8  2019 libsanitizer.spec
-rw-r--r-- 1 root root     1486 May  8  2019 libssp_nonshared.a
-rw-r--r-- 1 root root  4783610 May  8  2019 libstdc++.a
-rw-r--r-- 1 root root   680216 May  8  2019 libstdc++fs.a
lrwxrwxrwx 1 root root       40 May  8  2019 libstdc++.so -> ../../../x86_64-linux-gnu/libstdc++.so.6
-rw-r--r-- 1 root root   363654 May  8  2019 libsupc++.a
-rw-r--r-- 1 root root  2036204 May  8  2019 libtsan.a
lrwxrwxrwx 1 root root       38 May  8  2019 libtsan.so -> ../../../x86_64-linux-gnu/libtsan.so.0
-rw-r--r-- 1 root root   811530 May  8  2019 libubsan.a
lrwxrwxrwx 1 root root       39 May  8  2019 libubsan.so -> ../../../x86_64-linux-gnu/libubsan.so.0
-rwxr-xr-x 1 root root 21301200 May  8  2019 lto1*
-rwxr-xr-x 1 root root   893240 May  8  2019 lto-wrapper*
drwxr-xr-x 2 root root     4096 Jun 24  2019 plugin/

```

```shell script
root@evsetrail:~/playGCC/link/sources# ll /lib/x86_64-linux-gnu/lib
Display all 175 possibilities? (y or n)
root@evsetrail:~/playGCC/link/sources# ll /lib/x86_64-linux-gnu/libc
libc-2.27.so             libcap.so.2              libcidn.so.1             libcrypt-2.27.so         libcrypt.so.1            
libcap-ng.so.0           libcap.so.2.25           libcom_err.so.2          libcryptsetup.so.12      libc.so.6                
libcap-ng.so.0.0.0       libcidn-2.27.so          libcom_err.so.2.1        libcryptsetup.so.12.2.0  
root@evsetrail:~/playGCC/link/sources# ll /lib/x86_64-linux-gnu/libc

```

### 显式动态链接调用
总的来讲，动态链接库的调用方式有 2 种，分别是：
- 隐式调用（静态调用）：将动态链接库和其它源程序文件（或者目标文件）一起参与链接；
- 显式调用（动态调用）：手动调用动态链接库中包含的资源，同时用完后要手动将资源释放。

查看obviousdynamicmain.c文件

首先，该程序中并没有引入 test.h 头文件，因为对于显式调用动态链接库来说，并不需要引入它。
与此同时，在使用库文件中的相关函数之前，我们需要先调用 dlopen() 函数打开库文件，
然后才能通过 dlsym() 函数找到相关的函数。
另外，最后不要忘记调用 dlclose() 函数关闭库文件。

```shell script
Franks-Mac:sources frank$ gcc obviousdynamicmain.c -ldl -o obviousdynamicmain.exe
Franks-Mac:sources frank$ ./obviousdynamicmain.exe 
Input two numbers: 12 6
12+6=18
12-6=6
12÷6=2
Franks-Mac:sources frank$ 

```
注意，这里需要添加 -ldl 选项（该可执行程序需要 libdl.so 动态库的支持）

## makefile
写makefile时候一定要注意command前面一定要是tab，有些编辑器虽然打了tab但是它会以4个空格代替之。

如果Make命令运行时没有指定目标，默认会执行Makefile文件的第一个目标。
```
main.exe:add.o div.o sub.o
	gcc sources/main.c add.o div.o sub.o -o main.exe
add.o:sources/add.c
	gcc -c sources/add.c -o add.o
div.o:sources/div.c
	gcc -c sources/div.c -o div.o
sub.o:sources/sub.c
	gcc -c sources/sub.c -o sub.o
clean:
	rm -rf *.o
```

```shell script
Franks-Mac:link frank$ make
gcc -c sources/add.c -o add.o
gcc -c sources/div.c -o div.o
gcc -c sources/sub.c -o sub.o
gcc sources/main.c add.o div.o sub.o -o main.exe
Franks-Mac:link frank$ ll
total 64
drwxr-xr-x   9 frank  staff   288B Aug  4 18:08 .
drwxr-xr-x  23 frank  staff   736B Aug  4 17:50 ..
-rw-r--r--   1 frank  staff   248B Aug  4 18:08 Makefile
-rw-r--r--   1 frank  staff   624B Aug  4 18:08 add.o
-rw-r--r--   1 frank  staff   624B Aug  4 18:08 div.o
drwxr-xr-x   3 frank  staff    96B Aug  4 10:03 headers
-rwxr-xr-x   1 frank  staff    12K Aug  4 18:08 main.exe
drwxr-xr-x  15 frank  staff   480B Aug  4 17:18 sources
-rw-r--r--   1 frank  staff   624B Aug  4 18:08 sub.o
Franks-Mac:link frank$ ./main.exe 
Input two numbers: 12 6
12+6=18
12-6=6
12÷6=2
Franks-Mac:link frank$ make clean
rm -rf *.o
Franks-Mac:link frank$ ll
total 40
drwxr-xr-x   6 frank  staff   192B Aug  4 18:11 .
drwxr-xr-x  23 frank  staff   736B Aug  4 18:10 ..
-rw-r--r--   1 frank  staff   248B Aug  4 18:08 Makefile
drwxr-xr-x   3 frank  staff    96B Aug  4 10:03 headers
-rwxr-xr-x   1 frank  staff    12K Aug  4 18:08 main.exe
drwxr-xr-x  15 frank  staff   480B Aug  4 17:18 sources
Franks-Mac:link frank$ 

```

如果已经有clean文件
```shell script
Franks-Mac:link frank$ make clean
make: `clean' is up to date.
Franks-Mac:link frank$ 

```
需要明确声明clean式"伪目标"
```
.PHONY: clean
objects = add.o div.o sub.o
main.exe:$(objects)
	gcc sources/main.c $(objects) -o main.exe
add.o:sources/add.c
	gcc -c sources/add.c -o add.o
div.o:sources/div.c
	gcc -c sources/div.c -o div.o
sub.o:sources/sub.c
	gcc -c sources/sub.c -o sub.o
clean:
	rm -rf *.o
```

```shell script
Franks-Mac:link frank$ make clean
rm -rf *.o
Franks-Mac:link frank$ ll
total 48
drwxr-xr-x   7 frank  staff   224B Aug  4 18:33 .
drwxr-xr-x  23 frank  staff   736B Aug  4 18:33 ..
-rw-r--r--   1 frank  staff   276B Aug  4 18:33 Makefile
-rw-r--r--   1 frank  staff   262B Aug  4 18:25 clean
drwxr-xr-x   3 frank  staff    96B Aug  4 10:03 headers
-rwxr-xr-x   1 frank  staff    12K Aug  4 18:25 main.exe
drwxr-xr-x  15 frank  staff   480B Aug  4 17:18 sources
Franks-Mac:link frank$ 

```

### 前置条件（prerequisites）
前置条件通常是一组文件名，之间用空格分隔。它指定了"目标"是否重新构建的判断标准：
只要有一个前置文件不存在，或者有过更新（前置文件的last-modification时间戳比目标的时间戳新），"目标"就需要重新构建。

### 命令（commands）
命令（commands）表示如何更新目标文件，由一行或多行的Shell命令组成。它是构建"目标"的具体指令，它的运行结果通常就是生成目标文件。

每行命令之前必须有一个tab键。如果想用其他键，可以用内置变量.RECIPEPREFIX声明。
```
.RECIPEPREFIX = >
all:
> echo Hello, world
```
需要注意的是，每行命令在一个单独的shell中执行。这些Shell之间没有继承关系。
````
var-lost:
    export foo=bar
    echo "foo=[$$foo]"
````
上面代码执行后（make var-lost），取不到foo的值。因为两行命令在两个不同的进程执行。
一个解决办法是将两行命令写在一行，中间用分号分隔。
````
var-kept:
    export foo=bar; echo "foo=[$$foo]"
````
另一个解决办法是在换行符前加反斜杠转义。
````
var-kept:
    export foo=bar; \
    echo "foo=[$$foo]"
````
最后一个方法是加上.ONESHELL:命令。
````
.ONESHELL:
var-kept:
    export foo=bar; 
    echo "foo=[$$foo]"
````

### 回声（echoing）
正常情况下，make会打印每条命令，然后再执行，这就叫做回声（echoing）。

在命令的前面加上@，就可以关闭回声。
```
.PHONY: clean
objects = add.o div.o sub.o
main.exe:$(objects)
	gcc sources/main.c $(objects) -o main.exe
add.o:sources/add.c
	gcc -c sources/add.c -o add.o
div.o:sources/div.c
	gcc -c sources/div.c -o div.o
sub.o:sources/sub.c
	gcc -c sources/sub.c -o sub.o
clean:
	@rm -rf *.o
```
```shell script
Franks-Mac:link frank$ make clean
Franks-Mac:link frank$ 

```
由于在构建过程中，需要了解当前在执行哪条命令，所以通常只在注释和纯显示的echo命令前面加上@。

### 通配符
通配符（wildcard）用来指定一组符合条件的文件名。Makefile 的通配符与 Bash 一致，主要有星号（*）、问号（？）和 [...] 。
比如， *.o 表示所有后缀名为o的文件。

### 模式匹配
Make命令允许对文件名，进行类似正则运算的匹配，主要用到的匹配符是%。
比如，假定当前目录下有 f1.c 和 f2.c 两个源码文件，需要将它们编译为对应的对象文件。
````
%.o: %.c
````
等同于下面的写法。
````
f1.o: f1.c
f2.o: f2.c
````
使用匹配符%，可以将大量同类型的文件，只用一条规则就完成构建。

### 内置变量（Implicit Variables）
Make命令提供一系列内置变量，比如，$(CC) 指向当前使用的编译器，$(MAKE) 指向当前使用的Make工具。
这主要是为了跨平台的兼容性，详细的内置变量清单见手册。

````
output:
    $(CC) -o output input.c
````

## 交叉编译
### 交叉编译工具链的命名规则：

    arch [-vendor][-kernel][-system]
    
    arm-linux-gcc
    arm-none-linux-gnueabi-gcc
    arm-linux-gnu-gcc

其中每部分的含义如下：

- arch：体系架构，如ARM, MIPS
- vendor：工具链提供商
- kernel：目标内核

kernel，即内核，指使用该编译器编译出程序的目标系统。对应的环境或系统主要有两种：
(1) Linux：表示有操作系统（此处主要指Linux）的环境。
(2) bare-metal：直译为裸金属，表示无操作系统的环境。
比如用该交叉编译器编译一个U-boot或者其他小程序，是运行在无嵌入式Linux系统环境中单独运行的一个程序。
又比如平常我们购买的嵌入式系统开发板中，常带有一些如跑马灯的小程序，这种也是运行在无操作系统环境的程序。

- system：目标系统

system，直译为系统，其实主要表示交叉编译器所选择的库函数和目标系统。
常见的值有：gnu, gnueabi, uclibcgnueabi

一般为(gnu)eabi，即嵌入式应用二进制接口(Embedded Application Binary Interface)
另外ARM GCC可以根据是否支持操作系统进行分类。如：

1. arm-none-eabi：该编译器没有操作系统，不能支持那些与操作系统关系密切的函数（如fork(2)）
2. arm-none-linux-eabi：该编译器用于Linux系统

ABI即二进制应用程序接口(Application Binary Interface(ABI) for the ARM Architecture)。
计算机中，应用二进制接口描述了应用程序和操作系统之间或其他应用程序的低级接口。

EABI为嵌入式ABI，即Embedded ABI。EABI指定了文件格式、数据类型、寄存器使用、堆积组织优化和在一个嵌入式软件中参数的标准约定。
EABI与ABI的主要区别，是应用程序代码中允许使用特权指令，不需要动态链接，并且使用更紧凑的堆栈帧组织用来节省内存。
广泛使用EABI的有Power PC和ARM。

uclibc，是c库中的一种。

针对上述gnu, eabi, uclibc，对应的常见组合的含义为：
````
    gnu = glibc + oabi
    gnueabi = glibc + eabi
    uclibc = uclibc + oabi
````
### example
1. arm-none-eabi-gcc
````
    arch: arm (ARM architecture)
    vendor: none (NO vendor)
    kernel: (empty) (not target an operating system)
    system: eabi (complies with the ARM EABI)
````
该编译器一般用于编译ARM架构的裸机系统（包括 ARM Linux 的 boot、kernel，不适用编译 Linux 应用 Application），
一般适合 ARM7、Cortex-M 和 Cortex-R 内核的芯片使用，所以不支持那些跟操作系统关系密切的函数（比如fork(2)，
他使用的是 newlib 这个专用于嵌入式系统的C库）。

2. arm-none-linux-gnueabi-gcc
````
    arch: arm (ARM architecture)
    vendor: none (NO vendor)
    kernel: linux (creates binaries that run on the Linux operating system)
    system: gnueabi (uses the GNU EABI)
````
该编译器主要用于基于ARM架构的Linux系统，可用于编译 ARM 架构的u-boot、Linux内核、linux应用等。
arm-none-linux-gnueabi基于 gcc ，使用 glibc 库，是经过 Codesourcery 公司优化过推出的编译器，
且该交叉编译工具的浮点运算非常优秀。一般ARM9, ARM11, Cortex-A 内核，带有 Linux 操作系统的会用到。

3. arm-eabi-gcc
该编译器是Android ARM编译器。

4. armcc
ARM 公司推出的编译工具，功能和 arm-none-eabi 类似，可以编译裸机程序(u-boot, kernel)，但是不能编译 Linux 应用程序。
armcc一般和ARM开发工具一起，Keil MDK、ADS、RVDS和DS-5中的编译器都是armcc，所以 armcc 编译器都是收费的。


6. arm-linux-gnueabi-gcc & arm-linux-gnueabihf-gcc
两个交叉编译器名称上的区别在于 gnueabi 与 gnueabihf，分别适用于 armel 和 armhf 两个不同的架构，
armel 和 armhf 这两种架构在浮点运算上采用了不同的策略（有 fpu 的 arm 才能支持这两种浮点运算策略）。
其实这两个交叉编译器只是在 gcc 的选项 -mfloat-abi 的默认值不同。gcc的选项-mfloat-abi有三种值：
soft, softfp, hard，其值含义如下：

- soft: 不用fpu进行浮点计算（即使有fpu浮点运算单元，也不使用fpu）；
- softfp: armel架构（对应编译器是arm-linux-gnueabi-gcc）的默认值，用 fpu 计算，但传参数时使用普通寄存器。
这样中断的时候，只需要保存普通寄存器，且中断负荷小，但参数需要转换成浮点数之后再计算；
- hard: armhf架构（对应编译器是arm-linux-gnueabihf-gcc）的默认值，用 fpu 计算，传参数也用 fpu 中的浮点寄存器传递。
这样省去了转换，性能最好，但中断负荷高。

### 英文文档
The naming comes down to this: "arch-vendor-(os-)abi"

So for example:
x86_64-w64-mingw32 = x86_64 architecture (=AMD64), w64 (=mingw-w64 as "vendor"), mingw32 (=win32 API as seen by GCC)
i686-pc-msys = 32-bit (pc=generic name) msys binary
i686-unknown-linux-gnu = 32-bit GNU/linux

And your example specifically:
arm-none-linux-gnueabi = ARM architecture, no vendor, linux OS, and the gnueabi ABI.
The arm-eabi is alike you say, used for Android native apps.
One caveat: Debian uses a different naming, just to be difficult, so be careful if you're on a Debian-based system,
as they have different names for eg. i686-pc-mingw32.

### GCC交叉编译包名中ARMEB与ARMEL的区别
ARMEB = ARM EABI Big-endian ,也有称为ARMEB     #大端字节序 
ARMEL = ARM EABI Little-endian,也有称为ARMLE    #小端字节序

### GCC交叉编译包名中i686与x86_64区别
i686 is actually a 32-bit instruction set (part of the x86 family line), 
while x86_64 is a 64-bit instruction set (also referred to as amd64).

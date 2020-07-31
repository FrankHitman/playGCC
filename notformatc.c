//位于 demo.c 文件中
#include <stdio.h>
int main()
{
    const char * a = "abc";
    printStr(a);
    return;
}
int printStr(const char* str)
{
    printf(str);
}
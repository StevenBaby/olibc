/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-03
*/

#include <stdio.h>

int printf(const char *format, ...)
{
    int ret = 0;

    // mov eax, 4; write
    // mov ebx, 1; stdout
    // mov ecx, format;
    // mov edx, length;
    asm("int $0x80 \n"
        : "=a"(ret)
        : "a"(4), "b"(1), "c"(format), "d"(sizeof(format)));
    return ret;
}
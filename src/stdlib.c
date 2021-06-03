/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-03
*/

#include <stdlib.h>

void exit(int status)
{
    // mov eax, 1
    // mov ebx, code
    // int 0x80
    asm("int $0x80" ::"a"(1), "b"(status));
}
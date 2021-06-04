/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-03
*/

#include <onix_crt_entry.h>
#include <stdlib.h>

extern int main(int argc, char const *argv[]);

void onix_crt_entry()
{
    char *ebp = 0;
    asm volatile("movl %%ebp, %0 \n"
                 : "=r"(ebp));

    int argc = *(int *)(ebp + 4);
    const char **argv = (const char **)(ebp + 8);

    int ret = main(argc, argv);
    exit(ret);
}

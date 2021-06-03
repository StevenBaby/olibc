/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-03
*/

#include <onix_crt_entry.h>
#include <stdlib.h>

extern int main();

void onix_crt_entry()
{
    int ret = main();
    exit(ret);
}

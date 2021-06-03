/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-03
*/

#include <string.h>

size_t strlen(const char *str)
{
    if (str == NULL)
        return 0;
    char *ptr = (char *)str;
    while (*ptr++)
        ;
    return (ptr - str);
}
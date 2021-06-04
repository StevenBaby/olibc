/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-03
*/

#ifndef ONIX_STDIO_H
#define ONIX_STDIO_H

#include <stdarg.h>

extern int printf(const char *format, ...);

extern int vsprintf(char *buf, const char *format, va_list args);
extern int sprintf(char *buf, const char *format, ...);

#endif
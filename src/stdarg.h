/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-05
*/

#ifndef ONIX_STDARG_H
#define ONIX_STDARG_H

typedef char *va_list;

/*
va_start(va_list *ap, first variable arg);
*/
#define va_start(ap, arg) (ap = (va_list)&arg + sizeof(arg))

#define va_arg(ap, type) (*(type *)((ap += sizeof(type)) - sizeof(type)))

#define va_end(ap) (ap = (va_list)0)

/*
va_copy(va_list *ap, first variable var);
*/
// TODO va_copy
// #define va_copy(dest, src) // C99

#endif
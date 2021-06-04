/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-03
*/

#ifndef ONIX_STRING_H
#define ONIX_STRING_H

#include <ctypes.h>

extern size_t strlen(const char *str);

extern void memcpy(void *dest, void *src, size_t size);
extern int memcmp(void *dest, void *src, size_t size);
extern void memset(void *dest, char ch, size_t size);

extern char *strcpy(char *dest, char *src);
extern char *strcat(char *dest, char *src);
extern int strcmp(const char *str1, const char *str2);

extern char *strchr(const char *str, const char ch);
extern char *strrchr(const char *str, const char ch);

#endif
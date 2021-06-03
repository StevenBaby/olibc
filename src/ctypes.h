/* (C) Copyright 2021 Steven;
* @author: Steven kangweibaby@163.com
* @date: 2021-06-03
*/

#ifndef ONIX_CTYPES_H
#define ONIX_CTYPES_H

#define NULL (0)

typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;

typedef char i8;
typedef short i16;
typedef int i32;
typedef long long i64;



#ifndef __cplusplus
typedef u8 bool;
#define true (1)
#define false (0)
#endif

typedef u32 size_t;

#endif
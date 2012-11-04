#ifndef __TYPES_H__
#define __TYPES_H__

#ifdef __C__

#ifndef _S8_T
typedef signed char s8_t;
#endif //_S8_T

#ifndef _U8_T
typedef unsigned char u8_t;
#endif //_U8_T

#ifndef _S16_T
typedef signed short s16_t;
#endif //_S16_T

#ifndef _U16_T
typedef unsigned short u16_t;
#endif //_U16_T

#ifndef _S32_T
typedef signed int s32_t;
#endif //_S32_T

#ifndef _U32_T
typedef unsigned int u32_t;
#endif //_U32_T

#ifndef _S64_T
typedef signed long long s64_t;
#endif //_S64_T

#ifndef _U64_T
typedef unsigned long long u64_t;
#endif //_U64_T

#ifndef _SIZE_T
typedef unsigned long size_t;
#endif //_SIZE_T

#ifndef _RESULT_T
typedef size_t result_t;
#endif //_RESULT_T

#ifndef _BOOL_T
typedef unsigned char bool_t;
#endif //_BOOL_T

#endif //__C__

#endif //__TYPES_H__

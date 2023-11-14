#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>


/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _printf(const char *format, ...);
int c_print(va_list val);
int s_print(va_list val);
int _strlen(char *s);
int _strlenc(const char *s);
int print_37(void);
int print_int(va_list args);
int print_dec(va_list args);
int conv_bin(va_list val);
int unsigned_int(va_list args);
int print_octal(va_list val);
int hexa_decimal(va_list val);
int HEX_decimal2(va_list val);
int exclusive_string(va_list val);
int HEX_extra(unsigned int num);
int point_er(va_list val);
int reverse_string(va_list args);
int rot_string13(va_list args);
int _putchar(char y);
#endif

#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define UNUSED(x) (void)(x)
#define BUFF_SIZE 1024

/* FLAGS */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* SIZES */
#define S_LONG 2
#define S_SHORT 1


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
int get_flag(const char *format, int *i);
int buf_fer(char *buffer);
int print_able(char c);
int append_hexadecimal(char ascii_code, char buffer[], int i);
long int size_conversion(long int num, int size);

#endif

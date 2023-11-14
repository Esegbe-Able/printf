#include "main.h"
/**
 * _printf - This function selects the correct function to print.
 * @format: The identifier to look for.
 * Return: Length of the string.
 */
int _printf(const char * const format, ...)
{
	convert p[] = {
		{"%s", s_print}, {"%c", c_print},
		{"%%", print_37},
		{"%i", print_int}, {"%d", print_dec}, {"%r", reverse_string},
		{"%R", rot_string13}, {"%b", conv_bin},
		{"%u", unsigned_int},
		{"%o", print_octal}, {"%x", hexa_decimal}, {"%X", HEX_decimal2},
		{"%S", exclusive_string}, {"%p", point_er}
	};

	va_list args;
	int k = 0, l, leng = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

Here:
	while (format[k] != '\0')
	{
		l = 13;
		while (l >= 0)
		{
			if (p[l].ph[0] == format[k] && p[l].ph[1] == format[k + 1])
			{
				leng += p[l].function(args);
				k = k + 2;
				goto Here;
			}
			l--;
		}
		_putchar(format[k]);
		leng++;
		k++;
	}
	va_end(args);
	return (leng);
}

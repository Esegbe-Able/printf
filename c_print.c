#include "main.h"

/**
 * c_print -the function prints a character.
 * @val: argument passed.
 * Return: integer.
 */
int c_print(va_list val)
{
	char c;

	c = va_arg(val, int);
	_putchar(c);
	return (1);
}

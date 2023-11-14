#include "main.h"
/**
 * s_print - print a string.
 * @val: argumen t.
 * Return: the length of the string.
 */

int s_print(va_list val)
{
	char *s;
	int k, length;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		for (k = 0; k < length; k++)
			_putchar(s[k]);
		return (length);
	}
	else
	{
		length = _strlen(s);
		for (k = 0; k < length; k++)
			_putchar(s[k]);
		return (length);
	}
}


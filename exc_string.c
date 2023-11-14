#include "main.h"
/**
 * exclusive_string - The function prints exclusuives string.
 * @val: Value of string to be handled.
 * Return: integer.
 */

int exclusive_string(va_list val)
{
	char *s;
	int k, span = 0;
	int va;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (k = 0; s[k] != '\0'; k++)
	{
		if (s[k] < 32 || s[k] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			span = span + 2;
			va = s[k];
			if (va < 16)
			{
				_putchar('0');
				span++;
			}
			span = span + HEX_extra(va);
		}
		else
		{
			_putchar(s[k]);
			span++;
		}
	}
	return (span);
}

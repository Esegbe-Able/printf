#include "main.h"

/**
 * point_er - Function prints a pointer value in hexgecimal number.
 * @val: value to be handled.
 * Return: hexadecimal.
 */
int point_er(va_list val)
{
	long int m;
	int n;
	int k;
	void *p;
	char *s = "(nil)";

	p = va_arg(val, void*);

	if (p == NULL)
	{
		for (k = 0; s[k] != '\0'; k++)
		{
			_putchar(s[k]);
		}
		return (k);
	}
	m = (unsigned long int)p;
	_putchar('0');
	_putchar('m');
	n = HEX_extra(m);
	return (n + 2);
}

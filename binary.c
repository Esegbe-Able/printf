#include "main.h"

/**
 * conv_bin - function that prints binary number.
 * @val: Number to be converted (parameter).
 * Return: integer
 */
int conv_bin(va_list val)
{
	int flock = 0;
	int count = 0;
	int j, a = 1, b;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int q;

	for (j = 0; j < 32; j++)
	{
		q = ((a << (31 - j)) & number);
		if (q >> (31 - j))
			flock = 1;
		if (flock)
		{
			b = q >> (31 - j);
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}

#include "main.h"
/**
 * print_int - function that prints an integer
 * @args: argument to be printed
 * Return: integer
 */
int print_int(va_list args)
{
	int k = va_arg(args, int);
	int number, last = k % 10, digit, exp = 1;
	int  j = 1;

	k = k / 10;
	number = k;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		k = -k;
		last = -last;
		j++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = k;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');

	return (j);
}

/**
 * print_dec - Function that prints decimal numbers
 * @args: argument to be printed
 * Return: decimal
 */

int print_dec(va_list args)
{
	int k = va_arg(args, int);
	int number, last = k % 10, digit;
	int  j = 1;
	int exp = 1;

	k = k / 10;
	number = k;

	if (last < 0)
	{
		_putchar('-');
		number = -number;
		k = -k;
		last = -last;
		j++;
	}
	if (number > 0)
	{
		while (number / 10 != 0)
		{
			exp = exp * 10;
			number = number / 10;
		}
		number = k;
		while (exp > 0)
		{
			digit = number / exp;
			_putchar(digit + '0');
			number = number - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(last + '0');

	return (j);
}

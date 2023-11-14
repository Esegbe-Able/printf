#include "main.h"

/**
 * print_octal- Function that prints an octal number.
 * @val: value to handle (argument).
 * Return: count.
 */
int print_octal(va_list val)
{
	int k;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int tem = number;
	int *array;
	int count = 0;

	while (number / 8 != 0)
	{
		number /= 8;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (k = 0; k < count; k++)
	{
		array[k] = tem % 8;
		tem /= 8;
	}
	for (k = count - 1; k >= 0; k--)
	{
		_putchar(array[k] + '0');
	}
	free(array);
	return (count);
}

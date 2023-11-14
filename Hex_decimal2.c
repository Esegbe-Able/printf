#include "main.h"

/**
 * HEX_decimal2 - function prints a hexadecimal number.
 * @val: Number to handle.
 * Return: count.
 */
int HEX_decimal2(va_list val)
{
	int i;
	unsigned int number = va_arg(val, unsigned int);
	unsigned int tem = number;
	int *array;
	int count = 0;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));
	for (i = 0; i < count; i++)
	{
		array[i] = tem % 16;
		tem /= 16;
	}
	for (i = count - 1; i >= 0; i--)
	{
		if (array[i] > 9)
		array[i] = array[i] + 7;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}

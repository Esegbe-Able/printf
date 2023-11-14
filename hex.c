#include "main.h"

/**
 * hexa_decimal - Function prints an hexadecimal number.
 * @val: value to handle.
 * Return: count.
 */
int hexa_decimal(va_list val)
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
			array[i] = array[i] + 39;
		_putchar(array[i] + '0');
	}
	free(array);
	return (count);
}

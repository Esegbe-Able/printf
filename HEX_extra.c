#include "main.h"

/**
 * HEX_extra - This function prints a hexadecimal number.
 * @num: number to print.
 * Return: count.
 */
int HEX_extra(unsigned int number)
{
	int k;
	int *array;
	int count = 0;
	unsigned int tem = number;

	while (number / 16 != 0)
	{
		number /= 16;
		count++;
	}
	count++;
	array = malloc(count * sizeof(int));

	for (k = 0; k < count; k++)
	{
		array[k] = tem % 16;
		tem /= 16;
	}
	for (k = count - 1; k >= 0; k--)
	{
		if (array[k] > 9)
			array[k] = array[k] + 7;
		_putchar(array[k] + '0');
	}
	free(array);
	return (count);
}

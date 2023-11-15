#include "main.h"
#include <stdlib.h>
#define BUFF 1024

/**
 * buf_fer - this function writes a buffer
 * @buffer: pointer to the characters
 * Return: Always 0
 */
int buf_fer(char *buffer)
{
	int length = 0;
	int k;

	buffer = (char *) malloc(sizeof(char) * BUFF);
	if (buffer == NULL)
	{
		return (-1);
	}
	for (k = 0; k < BUFF; k++)
		buffer[k] = '0';
	if (length > 0)
	{
		_putchar(length);
	}
	free(buffer);
	return (length);
}

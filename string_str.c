#include "main.h"

/**
 * _strlen - The function finds the length of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int k;

	for (k = 0; s[k] != 0; k++)
		;
	return (k);

}

/**
 * _strlenc - This function finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlenc(const char *s)
{
	int k;

	for (k = 0; s[k] != 0; k++)
		;
	return (k);
}

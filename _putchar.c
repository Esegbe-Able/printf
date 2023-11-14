#include <unistd.h>

/**
 *putchar - write the character y to stdout
 * @y: character to be printed
 *
 * Return: On success 1
 */
int _putchar(char y)
{
	return (write(1, &y, 1));
}

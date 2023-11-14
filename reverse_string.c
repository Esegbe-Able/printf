#include "main.h"

/**
 * reverse_string - prints the reverse of a string i
 * @args: arguments
 * Return: the reversed string
 */
int reverse_string(va_list args)
{

	int a;
	int b = 0;
	char *s = va_arg(args, char*);

	if (s == NULL)
	s = "(null)";
	while (s[b] != '\0')
	b++;
	for (a = b - 1; a >= 0; a--)
	_putchar(s[a]);
	return (b);
}

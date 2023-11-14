#include "main.h"
/**
 * rot_string13 - function converts to rot13 (Encoding of strings).
 * @args: function-arguments
 * Return: count
 *
 */
int rot_string13(va_list args)
{
	int a, b, count = 0;
	int l = 0;
	char *s = va_arg(args, char*);
	char al[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char bl[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (a = 0; s[a]; a++)
	{
		l = 0;
		for (b = 0; al[b] && !l; b++)
		{
			if (s[a] == al[b])
			{
				_putchar(bl[b]);
				count++;
				l = 1;
			}
		}
		if (!l)
		{
			_putchar(s[a]);
			count++;
		}
	}
	return (count);
}

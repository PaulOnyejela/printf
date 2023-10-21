#include "main.h"
/**
 * print_s - print a string.
 * @val: argument
 * Return: int. length of the string.
 */

int print_s(va_list val)
{
	char *s;
	int x, length;

	s = va_arg(val, char *);
	if (s == NULL)
	{
		s = "(null)";
		length = _strlen(s);
		for (x = 0; x < length; x++)
			_putchar(s[x]);
		return (length);
	}
	else
	{
		length = _strlen(s);
		for (x = 0; x < length; x++)
			_putchar(s[x]);
		return (length);
	}
}

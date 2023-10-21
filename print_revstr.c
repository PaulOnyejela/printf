#include "main.h"

/**
 * print_revstr - function that prints a str in rev
 * @args: type struct va_arg where is allocated printf arguments
 *
 * Return: the string
 */
int print_revstr(va_list args)
{

	char *s = va_arg(args, char*);
	int x;
	int y = 0;

	if (s == NULL)
		s = "(null)";
	while (s[y] != '\0')
		y++;
	for (x = j - 1; x >= 0; x--)
		_putchar(s[x]);
	return (y);
}

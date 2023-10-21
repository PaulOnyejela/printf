#include "main.h"

/**
 * print_pointr - prints a hexadecimal number.
 * @val: argument.
 * Return: count.
 */
int print_pointr(va_list val)
{
	void *p;
	char *s = "(nil)";
	long int x;
	int b;
	int j;

	p = va_arg(val, void*);
	if (p == NULL)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			_putchar(s[j]);
		}
		return (j);
	}

	x = (unsigned long int)p;
	_putchar('0');
	_putchar('x');
	b = print_hex_xtra(x);
	return (b + 2);
}

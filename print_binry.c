#include "main.h"

/**
 * print_binry - prints binary number.
 * @val: parameter.
 * Return: integer
 */
int print_binry(va_list val)
{
	int flag = 0;
	int cont = 0;
	int j, x = 1, y;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (j = 0; j < 32; j++)
	{
		p = ((x << (31 - j)) & num);
		if (p >> (31 - j))
			flag = 1;
		if (flag)
		{
			y = p >> (31 - j);
			_putchar(y + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}

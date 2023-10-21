#include "main.h"
/**
 * print_unsigned - prints integer
 * @args: argument to print
 * Return: integer
 */
int print_unsigned(va_list args)
{
	unsigned int p = va_arg(args, unsigned int);
	int num, lst = p % 10, digit, exp = 1;
	int  j = 1;

	p = p / 10;
	num = p;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		p = -p;
		lst = -lst;
		j++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = p;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			j++;
		}
	}
	_putchar(lst + '0');

	return (j);
}

#include "main.h"
/**
 * print_int - print integer fxn
 * @args: argument
 * Return: integer
 */
int print_int(va_list args)
{
	int p = va_arg(args, int);
	int num, lst = p % 10, digit, exp = 1;
	int  i = 1;

	p = p / 10;
	num = p;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		p = -p;
		lst = -lst;
		i++;
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
			i++;
		}
	}
	_putchar(lst + '0');

	return (i);
}

/**
 * print_d - prints decimal
 * @args: argument to print
 * Return: integer
 */

int print_d(va_list args)
{
	int p = va_arg(args, int);
	int num, lst = p % 10, digit;
	int  i = 1;
	int exp = 1;

	p = p / 10;
	num = p;

	if (lst < 0)
	{
		_putchar('-');
		num = -num;
		p = -p;
		lst = -lst;
		i++;
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
			i++;
		}
	}
	_putchar(lst + '0');

	return (i);
}

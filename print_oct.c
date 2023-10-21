#include "main.h"

/**
 * print_oct - prints an octal num.
 * @val: arguments.
 * Return: count.
 */
int print_oct(va_list val)
{
	int i;
	int *arr;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 8 != 0)
	{
		num /= 8;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (i = 0; i < count; i++)
	{
		arr[i] = tem % 8;
		tem /= 8;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(arr[i] + '0');
	}
	free(arr);
	return (count);
}

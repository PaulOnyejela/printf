#include "main.h"

/**
 * print_hex - prints an hexadecimal number.
 * @val: argument.
 * Return: count.
 */
int print_hex(va_list val)
{
	int j;
	int *arr;
	int count = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (j = 0; j < count; j++)
	{
		arr[j] = tem % 16;
		tem /= 16;
	}
	for (j = count - 1; j >= 0; j--)
	{
		if (arr[j] > 9)
			arr[j] = arr[j] + 39;
		_putchar(arr[j] + '0');
	}
	free(arr);
	return (count);
}

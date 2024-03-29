#include "main.h"

/**
 * print_hex_xtra - prints an hexadecimal number.
 * @num: arguments.
 * Return: count.
 */
int print_hex_xtra(unsigned long int num)
{
	long int j;
	long int *arr;
	long int count = 0;
	unsigned long int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(long int));

	for (j = 0; j < count; j++)
	{
		arr[j] = temp % 16;
		temp = temp / 16;
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

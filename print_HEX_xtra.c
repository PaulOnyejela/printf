#include "main.h"

/**
 * print_HEX_xtra - prints a hexadecimal num
 * @num: number to print.
 * Return: count
 */
int print_HEX_xtra(unsigned int num)
{
	int j;
	int *arr;
	int count = 0;
	unsigned int tem = num;

	while (num / 16 != 0)
	{
		num /= 16;
		count++;
	}
	count++;
	arr = malloc(count * sizeof(int));

	for (j= 0; j< count; j++)
	{
		arr[j] = tem % 16;
		tem /= 16;
	}
	for (j= count - 1; j>= 0; j--)
	{
		if (arr[j] > 9)
			arr[j] = arr[j] + 7;
		_putchar(arr[j] + '0');
	}
	free(arr);
	return (count);
}

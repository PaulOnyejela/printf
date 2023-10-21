#include "main.h"

/**
 * _putchar - writes the char c to stdout
 * @c: The character to print
 *
 * Return: 1 On success.
 * On error, -1 is returned,& errno is set accordingly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


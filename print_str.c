#include "main.h"

/**
 * _strlen - finds the lenght of a string.
 * @s: string
 * Return: integer.
 */

int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);

}

/**
 * _strlen_c - finds length of a string but for constant characters
 * @s: string
 * Return: integer
 */

int _strlen_c(const char *s)
{
	int x;

	for (x = 0; s[x] != 0; x++)
		;
	return (x);
}

#include "main.h"
/**
 * print_excl_string - print exclusuive strings.
 * @val: parameter.
 * Return: integer.
 */

int print_excl_string(va_list val)
{
	char *s;
	int j, len = 0;
	int valu;

	s = va_arg(val, char *);
	if (s == NULL)
		s = "(null)";
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] < 32 || s[j] >= 127)
		{
			_putchar('\\');
			_putchar('x');
			len = len + 2;
			valu = s[j];
			if (valu < 16)
			{
				_putchar('0');
				len++;
			}
			len = len + print_HEX_xtra(valu);
		}
		else
		{
			_putchar(s[j]);
			len++;
		}
	}
	return (len);
}


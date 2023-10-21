#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>



/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int *_strcpy(char *dest, char *src);
int print_pointr(va_list val);
int print_unsigned(va_list args);
int print_hex_xtra(unsigned long int num);
int _strlen_c(const char *s);
int print_HEX_xtra(unsigned int num);
int print_excl_string(va_list val);
int print_HEXA(va_list val);
int print_hex(va_list val);
int print_oct(va_list val);
int print_binry(va_list val);
int print_revstr(va_list args);
int print_rot13(va_list args);
int print_int(va_list args);
int print_d(va_list args);
int _strlen(char *s);
int rev_string(char *s);
int print_ascii37(void);
int print_c(va_list val);
int print_s(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);

#endif

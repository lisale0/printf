#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>
/**
 * in-file testing
 *
 *
 */

int main()
{
	char a;
	a = 'a';
	_printf("hello %c", 'H');
	return (0);
}

int _printf(const char *format, ...)
{
	const char *t;

	vtype_t spec[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	for (t = format; *t != '\0'; t++)
	{
		while (*t != '%')
		{
			putchar(*t);
			t++;
		}
		/*it got to to % by this point*/
		t++;
		printf("\n");
		printf("%c", *t);
	}
	return (0);
}

void print_char(va_list valist)
{
}
void print_int(va_list valist)
{

}
void print_float(va_list valist)
{
}
void print_string(va_list valist)
{

}

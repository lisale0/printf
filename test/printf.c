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
	_printf("hello %s", "H");
	return (0);
}

int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, j, a;
	va_list valist;
	int *index;
	vtype_t spec[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', copy_string},
		{'\0', NULL}
	};
	i = 0;
	j = 0;
	a = 0;
	index = &a;

	va_start(valist, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%')
		{
			buffer[*index] = format[i];
			i++;
			*index += 1;
		}
		i++;

		while (spec[j].tp != '\0')
		{
			if (format[i] == spec[j].tp)
			{
				spec[j].f(valist, buffer, index);
			}
	        	j++;
		}
		i++;
		printf("%s\n", buffer);
	}
	return (0);
}

void print_char(va_list valist)
{
	char a;
	a = va_arg(valist, int);
	_putchar(a);
}
void print_int(va_list valist)
{
	int i;
	i  = va_arg(valist, int);
	_putchar(i + '0');
}
void print_float(va_list valist)
{

}
void print_string(va_list valist)
{

}

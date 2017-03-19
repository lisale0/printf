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

	//printf("Expected: hello %c %d %s\n", 'H', 1203484, "hello");
	_printf("hello %c %s %d\n", 'H', "hello", 1203484);
	//printf("hello %c %s %d\n", 'H', "hello", 1203484);
	_printf("%d\n", 2543);
	return (0);
}

int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, j, a;
	va_list valist;
	int *index;
	vtype_t spec[] = {
		{'c', format_c},
		{'d', format_d},
		{'f', format_f},
		{'s', format_s},
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
		j = 0;
		while (spec[j].tp != '\0')
		{
			if (format[i] == spec[j].tp)
			{
				spec[j].f(valist, buffer, index);
				break;
			}
	        	j++;
		}
		i++;
	}
	/*null terminator to buffer for testing purposes*/
	buffer[*index] = '\0';
	_write_buffer(buffer);
	return (0);
}

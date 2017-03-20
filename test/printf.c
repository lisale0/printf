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
	int i = 8;

	//printf("Expected: hello %c %d %s\n", 'H', 1203484, "hello");
	//_printf("hello %c %s %d\n", 'H', "hello", 1203484);
	//printf("hello %c %s %d\n", 'H', "hello", 1203484);
	//_printf("%d\n", 2543);

	_printf("We will prevail %d\n", -97);
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
		{'s', format_s},
		{'i', format_i},
		{'\0', NULL}
	};
	i = 0;
	j = 0;
	a = 0;

	index = &a;
	//printf("INDEX %d", *index);
	va_start(valist, format);
	while (format[i] != '\0')
	{
		while (format[i] != '%' &&  format[i] != '\0')
		{
			if (*index == 1024)
			{
				_write_buffer(buffer, index);
				reset_buffer(buffer);
				*index = 0;
			}
			buffer[*index] = format[i];
			i++;
			*index += 1;
		}
		if (format[i] == '\0')
		{
			break;
		}
		if (format[i] == '%')
		{
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
		}
		i++;
	}
	/*null terminator to buffer for testing purposes*/
	buffer[*index] = '\0';
	_write_buffer(buffer, index);
	return (0);
}

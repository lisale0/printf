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
	_printf("hello %c  %s", 'H', "Hello");
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
	//buffer[*index] = '\0';
	printf("%s\n", buffer);
	return (0);
}

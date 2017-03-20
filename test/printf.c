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
	
	_printf("hello %c %d %s\n", 'H', 1203484, "hello");
	printf("Expect: hello H 1203484 hello\n");
	
	_printf("hello %c %s %d\n", 'H', "hello", 1203484);
	printf("Expect: hello H hello 1203484\n");
	

	

	_printf("%d", 2543);
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
	printf("%s", buffer);
	return (0);
}

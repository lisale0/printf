#include <stdarg.h>
#include "holberton.h"
#include <stdio.h>

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
		{'u', format_u},
		{'%', format_perc},
		{'x', format_h},
		{'X', format_ch},
		{'o', format_o},
		{'b', format_b},
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
	return (*index);
}

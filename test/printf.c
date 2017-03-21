#include "holberton.h"
/**
  * _printf - function that prints based on format specifier
  * @format: takes in format specifier
  * Return: return pointer to index
  */
int _printf(const char *format, ...)
{
	char buffer[1024];
	int i = 0, j = 0, a = 0;
	va_list valist;
	int *index = &a;
	vtype_t spec[] = {
		{'c', format_c}, {'d', format_d}, {'s', format_s}, {'i', format_i},
		{'u', format_u}, {'%', format_perc}, {'x', format_h}, {'X', format_ch},
		{'o', format_o}, {'b', format_b}, {'\0', NULL}
	};
	va_start(valist, format);
	while (format[i] != '\0')
	{
		for (; format[i] != '%' && format[i] != '\0'; *index += 1, i++)
		{
			if (*index == 1024)
			{
				_write_buffer(buffer, index);
				reset_buffer(buffer);
				*index = 0;
			}
			buffer[*index] = format[i];
		}
		if (format[i] == '\0')
			break;
		if (format[i] == '%')
		{
			i++;
			for (j = 0; spec[j].tp != '\0'; j++)
			{
				if (format[i] == spec[j].tp)
				{
					spec[j].f(valist, buffer, index);
					break;
				}
			}
		}
		i++;
	}
	va_end(valist);
	buffer[*index] = '\0';
	_write_buffer(buffer, index);
	return (*index);
}

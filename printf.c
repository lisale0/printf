#include "holberton.h"
/**
  * _printf - function that prints based on format specifier
  * @format: takes in format specifier
  * Return: return pointer to index
  */
int _printf(const char *format, ...)
{
	char buffer[1024];
	int i, j = 0, a = 0, *index = &a; /*initialize index to address of a, which is 0; index keeps track of position in buffer*/
	va_list valist; /*va_list is the variety of arguments passed in ...*/
	vtype_t spec[] = {
		{'c', format_c}, {'d', format_d}, {'s', format_s}, {'i', format_d},
		{'u', format_u}, {'%', format_perc}, {'x', format_h}, {'X', format_ch},
		{'o', format_o}, {'b', format_b}, {'p', format_p}, {'r', format_r},
		{'R', format_R}, {'\0', NULL}
	};
	if (!format) /*format example: Length:[%d, %i]\n" when _printf("Length:[%d, %i]\n", len, len); is called*/
		return (-1);
	va_start(valist, format); /*format is the last parameter, format is ignored*/
	for (i = 0; format[i] != '\0'; i++)
	{
		/*write the format string into buffer until it hits either % or \0*/
		for (; format[i] != '%' && format[i] != '\0'; *index += 1, i++)
		{
			/*if buffer is full write and reset buffer*/
			if (*index == 1024)
			{	_write_buffer(buffer, index);
				reset_buffer(buffer);
				*index = 0;
			}
			buffer[*index] = format[i];
		}
		if (format[i] == '\0')
			break;
		if (format[i] == '%')
		{	i++;
			for (j = 0; spec[j].tp != '\0'; j++)
			{
				if (format[i] == spec[j].tp)
				{	spec[j].f(valist, buffer, index);
					break;
				}
			}
		}
	}
	va_end(valist); /*clears out the list*/
	buffer[*index] = '\0';
	_write_buffer(buffer, index);
	return (*index);
}

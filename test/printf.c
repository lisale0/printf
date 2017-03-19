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
	char buffer[1024];
	int i, j, a;
	va_list valist;
	int *index;
	vtype_t spec[] = {
		{'c', print_char},
		{'i', print_int},
		{'f', print_float},
		{'s', print_string},
		{'\0', NULL}
	};
	i = 0;
	j = 0;
	a = 0;
	index = &a;

	va_start(valist, format);
	while (format[i] != '\0')
	{
/*
	for (i = 0; format[i] != '\0'; i++)
	{
	*/
		while (format[i] != '%')
		{
			buffer[*index] = format[i];
			i++;
			*index += 1;
			/*printf("%d %d", *index, a);*/
		}
		/*it got to to % by this point*/
		i++;
		printf("\n");

		while (spec[j].tp != '\0')
		{
	        	printf("%c \n", spec[j].tp);
			
			if (format[i] == spec[j].tp)
			{
				copy_string(valist, buffer, index);
			}
		       
			j++;
		}
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

#include "holberton.h"
#include <stdlib.h>
/**
 * format_p - print an address
 * @valist: valist
 * @buffer: buffer
 * @index: index
 *
 * Return: return void;
 */
void format_p(va_list valist, char *buffer, int *index)
{

	format_lx(valist, buffer, index);
}
/**
 * format_lx - print long address
 * @valist: the number to convert
 * @buffer: buffer
 * @index: index
 *
 * Return: void
 */
void format_lx(va_list valist, char *buffer, int *index)
{
	unsigned long int n;
	int i;
	char *hexvalues;
	char *hex;
	void *a;

	a = va_arg(valist, void *);
	n = (unsigned long int)a;
	hexvalues = "0123456789abcdef";
	hex = malloc(14 * sizeof(char));

	for (i = 0; n != 0; i++)
	{
		hex[i] = hexvalues[n % 16];
		n /= 16;
	}

	i += 2;
	hex[13] = '0';
	hex[12] = 'x';
	for (i--; i >= 0; *index += 1, i--)
	{
		buffer[*index] = hex[i];
	}
}

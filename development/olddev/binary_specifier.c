#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * format_b - specificer for b
 * @valist: valist
 * @buffer: buffer
 * @index: index
 *
 * Return: void
 */
void format_b(va_list valist, char *buffer, int *index)
{
	unsigned int n;
	int i;
	char *binaryvalues;
	char *binary;

	n = va_arg(valist, int);
	binaryvalues = "01";

	binary = malloc(33 * sizeof(char));

	if (n == 0)
	{
		buffer[*index] = '0';
		*index += 1;
	}
	else
	{
		for (i = 0; n != 0; i++)
		{
			binary[i] = binaryvalues[n % 2];
			n /= 2;
		}
		for (i--; i >= 0; *index += 1, i--)
		{
			buffer[*index] = binary[i];
		}
	}
}

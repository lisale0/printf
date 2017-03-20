#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
void format_u(va_list valist, char *buffer, int *index)
{
        unsigned int i;
	int j, numlen;
        i = va_arg(valist, int);
        numlen = num_len(i);

        char num_str[numlen];
        utos(num_str, i);
        for (i = *index, j = 0; j < numlen; *index += 1, i++, j++)
        {
                if (*index == 1024)
                {
                        _write_buffer(buffer, index);
                        reset_buffer(buffer);
                        *index = 0;
                }
                buffer[*index] = num_str[j];
        }
}

void format_h(va_list valist, char *buffer, int *index)
{
	unsigned int n;
	int i, j;
	n = va_arg(valist, int);
	char hexvalues[] = "0123456789abcdef";

	char *hex = malloc(9 * sizeof(char));
	
	for (i = 0; n != 0; i++)
	{
		hex[i] = hexvalues[n % 16];
		n /= 16;
	}
	for (i--; i >= 0; *index += 1, i--)
	{
		buffer[*index] = hex[i];
	}

}

void format_ch(va_list valist, char *buffer, int *index)
{
	unsigned int n;
	int i, j;
	n = va_arg(valist, int);
	char hexvalues[] = "0123456789ABCDEF";

	char *hex = malloc(9 * sizeof(char));
	
	for (i = 0; n != 0; i++)
	{
		hex[i] = hexvalues[n % 16];
		n /= 16;
	}
	for (i--; i >= 0; *index += 1, i--)
	{
		buffer[*index] = hex[i];
	}

}

void format_o(va_list valist, char *buffer, int *index)
{
	unsigned int n;
	int i, j;
	n = va_arg(valist, int);
	char hexvalues[] = "0123456789ABCDEF";

	char *hex = malloc(9 * sizeof(char));
	
	for (i = 0; n != 0; i++)
	{
		hex[i] = hexvalues[n % 8];
		n /= 8;
	}
	for (i--; i >= 0; *index += 1, i--)
	{
		buffer[*index] = hex[i];
	}

}

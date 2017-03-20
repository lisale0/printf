#include "holberton.h"
#include <stdio.h>
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

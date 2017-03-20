#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>



void format_i(va_list valist, char *buffer, int *index)
{
	int i, j, numlen;
        i = va_arg(valist, int);

	numlen = num_len(i);

	if (i < 0)
	{
		*index += 1;
		numlen += 1;
	}
	char num_str[numlen];
	itos(num_str, i);
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
/**
 *
 *
 *
 *
 */
void format_d(va_list valist, char *buffer, int *index)
{
	int i, j, numlen;
        i = va_arg(valist, int);

	numlen = num_len(i);
	if (i < 0)
        {
                *index += 1;
                numlen += 1;
        }
        char num_str[numlen];

	itos(num_str, i);
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
/**
  * copy_string - function that copies string to buffer
  * @valist: takes in a list
  * @buffer: takes in a buffer
  * @index: takes in the index
  *
  * Return: void
  */
void format_s(va_list valist, char *buffer, int *index)
{
	int i, j, strlen;
	char *s;

	s = va_arg(valist, char*);
	strlen = _strlen(s);

	for (i = *index, j = 0; s[j] != '\0';  *index += 1, i++, j++)
	{
		if (*index == 1024)
                {
                        _write_buffer(buffer, index);
                        reset_buffer(buffer);
			*index = 0;
                }
		buffer[*index] = s[j];
	}
}
/**
 * copy_char - function that copies a char to buffer
 * @valist: takes in list
 * @buffer: takes in a buffer
 * @index: takes in index
 *
 * Return: void
 */
void format_c(va_list valist, char *buffer, int *index)
{
        char s;

        s = va_arg(valist, int);
	if (*index == 1024)
	{
		_write_buffer(buffer, index);
		reset_buffer(buffer);
		*index = 0;
	}
	buffer[*index] = s;
	*index += 1;
}

#include "holberton.h"
/**
  * copy_string - function that copies the buffer
  * @valist: takes in a list
  * @buffer: takes in a buffer
  * @index: taktes in the index
  */
void copy_string(va_list valist, char *buffer, int *index)
{
	int i, j;
	char *s;

	s = va_arg(valist, char *);

	for (i = *index, j =0; s[j] != '\0'; i++, *index += 1, i++, j++)
	{
		buffer[*index] = s[j];
	}
}

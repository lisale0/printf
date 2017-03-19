#include "holberton.h"
/**
  * copy_string - function that copies the buffer
  * @valist: takes in a list
  * @buffer: takes in a buffer
  * @index: taktes in the index
  */
int copy_string(va_list valist, char *buffer, int index)
{
	int i;
	char *s;

	s = va_arg(valist, char *);
	for (i = 0; s[i] != '\0'; i++, index++)
	{
		buffer[index] = s[i];
	}
	return (index);
}


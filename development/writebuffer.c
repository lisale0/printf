#include <unistd.h>
#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#define BUFSIZE 1024
/**
  * _write_buffer - function that writes to the buffer
  * @buffer: takes in a buffer pointer
  * @index: takes in an index pointer
  */
void _write_buffer(char *buffer, int *index)
{
	write(1, buffer, *index);
}

/**
 *  _memcpy - function copies n bytes from memory area src to memory area dest
 * @dest: the destination
 * @src: the src
 * @n: the number of bytes to write
 *
 * Return: char pointer/array
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}

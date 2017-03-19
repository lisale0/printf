#include <unistd.h>
#include "holberton.h"
#define BUFSIZE 1024
#include <stdio.h>
#include <stdlib.h>

void _write_buffer(char *s)
{
	char temp[BUFSIZE];
	int slen, i;
	slen = _strlen(s);

	_memcpy(temp, s, slen);

	for (i = 0; i < slen  && i <= BUFSIZE; i++)
		write(1, (void*)&temp[i], 1);

}

/**
 * _strlen - count the length of a string
 *  @s: char pointer
 *
 * Return: integer
 */
int _strlen(char *s)
{
	int i, count;

	count = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (i);
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

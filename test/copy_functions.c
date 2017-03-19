#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

void format_f(va_list valist, char *buffer, int *index)
{

	
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

	char num_str[numlen];

	tostring(num_str, i);
	printf("num_str: %s\n", num_str);
	for (i = *index, j = 0; j < numlen; *index += 1, i++, j++)
        {
		printf("%d\n", j);
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
	buffer[*index] = s;
	*index += 1;
}
char* itoa(int val, int base){
	static char buf[32] = {0};
	int i = 30;

	for(; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];
	return &buf[i+1];
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

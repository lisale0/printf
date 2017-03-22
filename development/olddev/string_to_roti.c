#include "holberton.h"
/**
 * rot13 - converts string to rot13
 * @s: takes in a string
 *
 */

void rot13(char *s)
{
	int i, j;

	char key[] = "abcdefghijklmABCDEFGHIKLM";
	char key_value[] = "nopqrstuvwxyzNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; key[j] != '\0'; j++)
		{
			if (s[i] == key[j])
			{
				s[i] = key_value[j];
			}
			else if (s[i] == key_value[j])
			{
				s[i] = key[j];
			}
		}
		_putchar('\n');
	}
}

void format_R(va_list valist, char *buffer, char *index)
{
	int i, j, strlen;
	char *s;

	s = va_arg(valist, char *);
	rot13(s);
	strlen = _strlen(s);

	for (i = *index, j = 0; s[j] != '\0'; *index++, i++, j++)
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

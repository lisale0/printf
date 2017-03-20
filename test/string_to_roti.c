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
	}
}

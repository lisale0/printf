#include <stdio.h>
/**
  * itos - function that converts integer to string
  * @str: takes in string array
  * @num: takes in a num
  * Return: return the converted string
  */
char *itos(char str[], int num)
{
	int i, rem, len = 0, n, origin;

	n = num;

	origin = num;

	while (n != 0)
	{
		len++;
		n /= 10;
	}
	i = 0;
	if (num < 0)
	{
		len++;
		str[i] = '-';
		num *= -1;
		i++;
	}
	while (i < len)
	{
		rem = num % 10;
		num = num / 10;
		if (origin < 0)
			str[len - (i)] = rem + '0';
		else
			str[len - (i + 1)] = rem + '0';
		i++;
	}
	str[len] = '\0';
	return (str);
}
/**
  * utos - function that converts unsigned integer to string
  * @str: takes in string array
  * @num: takes in a num
  * Return: return the converted string
  */
char *utos(char str[], unsigned int num)
{
	int i, rem, len = 0, n, origin;

	n = num;

	origin = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	i = 0;
	while (i < len)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
		i++;
	}
	str[len] = '\0';
	return (str);
}
/**
  * num_len - function that finds length of number
  * @num: takes in a num
  * Return: return length of number
  */
int num_len(int num)
{
	int n, len;

	n = num;

	len = 0;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}
/**
* rev_string - reverses a string
* @s: takes in a string
*/
void rev_string(char *s)
{
	int i, c;

	char temp;

	c = 0;
	while (s[c] != '\0')
	{
		c++;
	}
	c--;
	for (i = 0; i < c; i++)
	{
		temp = s[i];
		s[i] = s[c];
		s[c] = temp;
	}
}

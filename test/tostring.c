char *tostring(char str[], int num)
{
	int i, rem, len = 0, n;

	n = num;
	while (n != 0)
	{
		len++;
		n /= 10;
	}

	for (i = 0; i < len; i++)
	{
		rem = num % 10;
		num = num / 10;
		str[len - (i + 1)] = rem + '0';
	}

        //str[len] = '\0';
	return (str);
}

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
	return len;
}

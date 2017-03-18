void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_string - print string
 * @valist: va_list
 *
 * Return:void
 */
void print_string(va_list valist)
{
	char *temp;

	temp = va_arg(valist, char *);
	if (temp == NULL)
	{
		temp = "(nil)";
	}
	printf("%s", temp);
}

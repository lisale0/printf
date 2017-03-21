#include "holberton.h"
#include <stdio.h>
void format_p(va_list valist, char *buffer, int *index)
{
	char *  a;
	void *b;
	a = va_arg(valist, void *);

	b = &a;
	_printf("%x\n", b);
}

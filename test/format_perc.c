#include "holberton.h"
void format_perc(va_list valist, char *buffer, int *index)
{
	buffer[*index] = '%';
	*index += 1;
}

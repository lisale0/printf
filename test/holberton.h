#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
/**
 * struct vtype - struct vtype
 * @tp: tp
 * @f: function
 *
 */
typedef struct vtype
{
	char tp;
	void (*f)();
} vtype_t;
void print_char(va_list valist);
void print_int(va_list valist);
void print_float(va_list valist);
void print_string(va_list valist);

#endif /* HOLBERTON_H */

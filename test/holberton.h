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
void _write_buffer(char *s);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
#endif /* HOLBERTON_H */

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
void _write_buffer(char *buffer, int *index);
int _strlen(char *s);
char *_memcpy(char *dest, char *src, unsigned int n);
void format_s(va_list valist, char *buffer, int *index);
void format_c(va_list valist, char *buffer, int *index);
void format_d(va_list valist, char *buffer, int *index);
void format_f(va_list valist, char *buffer, int *index);
char *tostring(char str[], int num);
int num_len(int num);
<<<<<<< HEAD
void reset_buffer(char *buffer);
=======
void reset_buffer(char buffer[]);
void *rot13(char *s);
>>>>>>> 2811a457373b64de5ef0a782df55228dc6982cfd
#endif /* HOLBERTON_H */

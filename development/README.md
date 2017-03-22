# Rewrite Printf in the C Programming Language

This project is about recreating the C library function printf. The function printf sends formatted output to `stdout` (standard output stream) by formatting the argument(s) passed in and converting the arguments(s) into a character string. This version will be used as `_printf`.

## Requirements
You will need the following files:
|   **File**    |           **Decription**              |
|---------------|---------------------------------------|
| printf.c      | contains main printf function         |
| putchar.c     | contains putchar function             |
| d or i        | int to signed decimal                 |
| o             | unsigned int to unsigned octal        |
| u             | unsigned int to unsigned decimal      |
| x or X        | unsigned int to unsigned hexadecimal  |
| %             | no conversion, writes '%'             |
| cprintf.c             | characters                            |
| s             | string of characters                  |
| d or i        | int to signed decimal                 |
| o             | unsigned int to unsigned octal        |
| u             | unsigned int to unsigned decimal      |
| x or X        | unsigned int to unsigned hexadecimal  |
| %             | no conversion, writes '%'             |
## How to Use
```
$ git clone git@github.com:kjowong/printf.git
$ gcc -Wall -Werror -Wextra -pendantic *.c
```
Compile all your *.c files in your directory and use _printf in your code.

#### How to declare in your code
int _printf(const char *format, ...)

### Example
```
_printf("%s is now %d ", "Holberton", 2);
$ Holberton is now 2 
```
### Format tags
Format tags implemented in _printf

| **specifier** | **output**                            |
|---------------|---------------------------------------|
| c             | characters                            |
| s             | string of characters                  |
| d or i        | int to signed decimal                 |
| o             | unsigned int to unsigned octal        |
| u             | unsigned int to unsigned decimal      |
| x or X        | unsigned int to unsigned hexadecimal  |
| %             | no conversion, writes '%'             |

## File Breakdown 
### 

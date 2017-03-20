# Rewrite Printf in the C Programming Language

### Description
This project is about recreating the C library function printf. The function printf sends formatted output to stdout by formatting input and converting the input into a character string and outputs to `stdout`.

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
| s          | string of characters                  |
| i or d        | signed decimal int                    |
| R             | rot13 characters to string            |

## File Breakdown 
### 

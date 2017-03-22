# _printf() in the C Programming Language

This project is about recreating the C library function printf. The function printf sends formatted output to `stdout` (standard output stream) by formatting the argument(s) passed in and converting the arguments(s) into a character string. This version will be used as `_printf`.
## Environment
Our printf has been tested on Ubuntu 14.05.5 LTS

Tests done in VirtualBox on [Ubuntu](https://atlas.hashicorp.com/ubuntu/boxes/trusty64) via [Vagrant](https://www.vagrantup.com/)(1.9.1)

## Repository Breakdown
Once cloned over, the repository will contain the following files:

|   **File**    |  **Decription**                       |
|---------------|---------------------------------------|
| holberton.h   | header file with prototypes           |
| printf.c      | contains main printf function         |
| _putchar.c     | contains putchar function             |
| string_specifiers.c | contains functions for **s** and **c** |
| signed_decimal_specifiers.c | contains functions for **d** and **i** |
| unsigned_specifiers.c | contains functions for **o**, **u**, **x**, **X** |
| binary_specifier.c     | contains functions for **b**|
| pointer_address_specifiers.c | contains functions for **p** |
| write_percent specifiers.c | contains functions for **'%'** |
| write_buffer.c     | contains functions to write to the buffer |
| reset_buffer.c     | contains functions to reset the buffer |
| hold     | hold             |

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
| p             | pointer address                       |
| %             | no conversion, writes '%'             |

## How to Use
There are two ways to use the _printf function in your code.
First step is to clone the repository into your directory
```
$ git clone https://github.com/kjowong/printf.git
```
Once that is done, you can create a static library or use the -I in gcc (details to come)

### Compile with a static library for _printf
Change your directory into the _printf directory in order to create your static library
```
$ cd printf
```


## Use in code 
### How to use _printf in your code
Please see the following example when _printf is implemented in your code:

```
#include <holberton.h>

int main(void)
{
  _printf("Let's try to print a %s sentence.\n", "simple");
  return (0):
 }
```
This is an an example output:
```
$ Let's try to print a simple sentence.
```
$ gcc -Wall -Werror -Wextra -pendantic *.c
Compile all your *.c files in your directory and use _printf in your code.

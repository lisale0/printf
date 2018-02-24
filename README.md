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
| string_spec_helpers.c     | contains functions to help with string functions in string_specifiers.c|
| signed_decimal_specifiers.c | contains functions for **d** and **i** |
| unsigned_specifiers.c | contains functions for **o**, **u**, **x**, **X** |
| binary_specifier.c     | contains functions for **b**|
| pointer_address_specifiers.c | contains functions for **p** |
| write_percent specifiers.c | contains functions for **'%'** |
| write_buffer.c     | contains functions to write to the buffer |
| reset_buffer.c     | contains functions to reset the buffer |
| rev_string.c     | contains functions to reverse strings |
| rot_13.c     | contains functions to converts a string to rot13 format |

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
| r             | reverses string input                 |
| R             | converts string input into rot13      |
| b             | unsigned int to binary                |

## How to Use
There are two ways to use the _printf function in your code.
First step is to clone the repository into your directory
```
$ git clone https://github.com/lisale0/printf.git
```
Once that is done, you can create a static library or use the -I in gcc

### Compile with a static library for _printf
Change your directory into the _printf directory in order to create your static library
```
$ cd printf
```
Compile all the `.c` files in _printf
```
gcc -Wall -Werror -Wextra -pedantic -c *.c
```
All your `.c` files should also have a corresponding `.o` file. Run the following to create your static library:
```
ar -rc lib<LIBRARY-NAME>.a *.o
```
To run your static library with your own `YOUR-FILE.c` file, use the following command:
```
gcc <YOUR-FILE>.c -L. -lib<LIBRARY-NAME> -o <OUT-NAME>
```
### Compile without a static library for _printf
Make sure the _printf directory is in the same directory as your `YOUR-FILE.c` file and then run the following command:
```
gcc -Wall -Werror -Wextra -pedantic -I $PWD/printf prinft/*.c <YOUR-FILE>.c
```
The `-I` flag allows you to include the directory of the header file `holberton.h`. `$PWD/printf` takes the absolute path of the _print directory while `printf/*.c` compiles all your `.c` files in _printf


#### Example main.c file
```
#include <limits.h>
#include <stdio.h>
#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2;
    unsigned int ui;
    void *addr;

    len = _printf("Let's try to printf a simple sentence.\n");
    len2 = printf("Let's try to printf a simple sentence.\n");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe637541f0;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");
    return (0);
}
$ gcc -Wall -Wextra -Werror -pedantic -Wno-format *.c
$ ./printf
Let's try to printf a simple sentence.
Let's try to printf a simple sentence.
Length:[39, 39]
Length:[39, 39]
Negative:[-762534]
Negative:[-762534]
Unsigned:[2147484671]
Unsigned:[2147484671]
Unsigned octal:[20000001777]
Unsigned octal:[20000001777]
Unsigned hexadecimal:[800003ff, 800003FF]
Unsigned hexadecimal:[800003ff, 800003FF]
Character:[H]
Character:[H]
String:[I am a string !]
String:[I am a string !]
Address:[0x7ffe637541f0]
Address:[0x7ffe637541f0]
Percent:[%]
Percent:[%]
Len:[12]
Len:[12]
Unknown:[%r]
Unknown:[%r]
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
## Notes
This _printf function currently does not support special flags [+ , - , `, \0 , #], field, width or precision.

## Known Bugs
There are no known bugs at the time.

### Authors
*Kimberly Wong* - [Github](https://github.com/kjowong) || [Twitter](https://twitter.com/kjowong) || [email](kimberly.wong@holbertonschool.com)

*Lisa Leung* - [Github](https://github.com/lisale0) || [Twitter](https://twitter.com/lisale01) || [email](lisa.leung@holbertonschool.com)

#### Feedback and contributors welcomed. Reach out to either authors.

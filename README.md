# \_Printf Project. 

\_printf is a function that produces output according to a format.
---

## Description:
This function prints arguments according to a format. Also converts this
arguments for output based on the format of the string.

## Requirements of the Project:

* Allowed editors: vi, vim, emacs.
* All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options
 `-Wall -Werror -Wextra -pedantic -std=gnu89`.
* All your files should end with a new line.
* A `README.md` file, at the root of the folder of the project is mandatory.
* Your code should use the `Betty` style. It will be checked using betty-style.pl and betty-doc.pl.
* You are not allowed to use global variables.
* No more than 5 functions per file.
* The prototypes of all your functions should be included in your header file called `main.h`.
* All your header files should be include guarded.

## The tasks of the project:
This project has requirements. The tasks are divided in the number 0, number 1 and the
number 2.
*Task 0: Write a function that produces output according to a format and
returns the number of characters printed excluding the null byte used to end
output to strings.
Write output to stdout.
Format is a character string and is composed of zero or more directives.
Required conversion specifiers.
1. c
2. s
3. %

*Task 1: We had to add teh following conversion specifiers to the previous
code.
1. d
2. i

*Task 2: We had to create a man page for our function and a good README.

> In this project we don't take into account:
*Reproduce the buffer handling of the C library **printf** function.
*We don't have to handle the flag characters.
*We don't have to handle field width.
*We don't have to handle precision.
*We don't have to handle the lenght modifiers.

## Compilation:
Compilation to use `_printf()` function on C.
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
```
Here is a list of all the necessary files in this repository.
* \_printf.c - This is the principal function, the one that calls all the 
arguments, the other functions and prints the output.
* main.h -  Contains the header files of all the functions.
* counter1,6.c - This function counts every character of the string format. It 
takes in count the porcentage sign to not count it.
* vprint.c - Is the function in charge of print the normal string "Hello World"
without format specifiers and is the one that calls switchprint and then print
the format specifier.
* switchprint.c - is a function besides of vprint where switchs between the
character after the porcentage sign to determine the input, if the string is a
integer or a char.
* vinteger.h - Is the function that prints numbers in a string, it converts the
number to an ASCII value, and contains a function that reverse strings.
* main.c - It is a simple list of test to check the correct function of the
main function \_printf.

## Format Specifiers:

This function can use the next list of format speciiers:

* `c` prints a character.
* `s` prints a string.
* `%` prints a porcentage.
* `d` prints a decimal.
* `i` prints a integer.

## Usage Examples:
Here is a example of the function printing a simple string.
```
int main(void)
{
		_printf ("Hello %s\n", "World");
			return (0);			
}
Output:
root:/ Hello World
```
On this other example prints more arguments.

```
int main(void)
{
		_printf("%cello %s, today is %d of %s\n", 'H', "World", 10, Januray);
			return(0);
			
}
Output:
root:/ Hello World, today is 10 of Januray
```

## Contributing:
Pull request are welcome. If you have any idea for improvement let us know!
You can open a issue and discuss it with us.

## Support:
For any issue, bug or assistance, you can find us on GitHub:
* [Juan Manuel Rivera Seara](https://github.com/juanmaishere)
* [Noelia Micaela Viera Larrosa](https://github.com/MicaViera)

## Authors:
**Noelia Micaela Viera Larrosa & Juan Manuel Rivera Seara.**


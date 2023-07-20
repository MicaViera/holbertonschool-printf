# _\__Printf Project. 

\_printf is a function that produces output according to a format.
---
## Description:
This function prints arguments according to a format. Also converts this
arguments for output based on the format of the string.
## Installation:
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
## Usage:
(poner codigo con un ejemplo de como empezar a usar el codigo sencillamente)
## Contributing:
Pull request are welcome. If you have any idea for improvement let us know!
You can open a issue and discuss it with us.
## Support:
For any issue, bug or assistance, you can find us on GitHub:
* [Juan Manuel Rivera Seara](https://github.com/juanmaishere)
* [Noelia Micaela Viera Larrosa](https://github.com/MicaViera)
## Authors:
Noelia Micaela Viera Larrosa & Juan Manuel Rivera Seara.


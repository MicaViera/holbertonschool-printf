#include <string.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
int v_printf(const char *format, va_list args);
int switchprint(const char *format, va_list args);
int counter16(const char *format);
char* my_itoa(long int num, char* str);
void reverser(char *str);

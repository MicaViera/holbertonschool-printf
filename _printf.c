#include "main.h"
/**
 * _printf - Is the  principal function that prints the strings.
 * @format: Is a character string.
 * Return: c.
 */
int
_printf(const char *format, ...)
{
	va_list args;
	int l = 0, c = 0, x = 0, flag = 0;

	if (format == NULL)
	{
	return (-1);
	}

	l = strlen(format);

	if (format[l - 2] != '%' && format[l - 1] == '%')
	{
	flag = 1;
	}
	if (format[l - 3] == '%' && format[l - 2] == '%' && format[l - 1] == '%')
	{
	flag = 1;
	}
	va_start(args, format);
	x = v_printf(format, args);

	c = counter16(format);

	va_end(args);

	if (flag == 1)
	{
	return (-1);
	}

	return (c + x);
}

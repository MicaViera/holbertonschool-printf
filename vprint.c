#include "main.h"
/**
 * v_printf - This function prints without the format specifiers.
 * @format: Is the character string.
 * @args: The arguments.
 * Return: 0.
 */
int v_printf(const char *format, va_list args)
{
	int x = 0, flag1 = 0, i = 0;

	if (format == NULL)
	{
	return (-1);
	}

	while (format[i] != '\0')
	{
		if (format == NULL)
		{
		return (-1);
		}
		if (flag1 == 0)
		{
			if (format[i] == '%')
			{
			flag1 = 1; }
			else
			{
			_putchar(format[i]); } }
		else if (flag1 == 1)
			{
			x =	switchprint(format + i, args);
				flag1 = 0;
			}
	i++;
}
return (x);
}

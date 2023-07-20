#include "main.h"
int v_printf(const char *format, va_list args)
{
	int flag1 = 0;

	if (format == NULL)
	{
	return (-1);
	}

	while (*format != '\0')
	{
		if (flag1 == 0)
		{
			if (*format == '%')
			{
			flag1 = 1; }
			else
			{
			_putchar(*format); } }
		else if (flag1 == 1)
			{
			switchprint(format, args);
			flag1 = 0;
			}
	format++;
}
return (0);
}

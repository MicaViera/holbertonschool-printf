#include "main.h"
int
_printf(const char *format, ...)
{
	va_list args;
	int len = 0, c = 0, x = 0, flag = 0;

	if (format == NULL)
	{
	return (-1);
	}

	len = strlen(format);

	if (format[len - 2] != '%' && format[len - 1] == '%')
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

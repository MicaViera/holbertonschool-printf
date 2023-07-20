#include "main.h"
int
_printf(const char *format, ...)
{
	va_list args;
	int c = 0;

	if (format == NULL)
	{
	return (-1);
	}

	va_start(args, format);
	v_printf(format, args);

	c = counter16(format);

	va_end(args);

	return (c);
}

#include "main.h"
int counter16(const char *format)
{
int count = 0;
int iter = 0;

	while (format[iter] != '\0')
	{
		if (format[iter] == '%' && format[iter + 1] == '%')
		{
		iter++;
		count++;
		}
		else if (format[iter] == '%')
		{
		iter++;
		}
		else if (format[iter] == '\\')
		{
			iter++;

				if (format[iter] != '%')
				{
				count++;
				}
		}
		else
		{
		count++;
		}
	iter++;
	}
return (count);
}

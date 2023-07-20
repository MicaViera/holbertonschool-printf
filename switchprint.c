#include "main.h"
int switchprint(const char *format, va_list args)
{
	int x = 0, i, num;
	char buffer[12];
	char *stn;

				switch (*format)
				{
				case 'c':
					{
					_putchar(va_arg(args, int));
					return (x + 1);
					break; }
				case 's':
					{
					char *s = va_arg(args, char *);

					for (i = 0; s[i] != '\0'; i++)
						{
						_putchar(s[i]);
						}
					return (x + i);
					break; }
				case '%':
					{
					char t = '%';

					_putchar(t);
					return (x + 1);
					break; }
				case 'd':
				case 'i':
					{
					num = va_arg(args, int);
					stn = my_itoa(num, buffer);
					reverser(stn);
					for (i = 0; stn[i] != '\0'; i++)
					{
					_putchar(stn[i]);
					} } }
format++;
return (x);
}

#include "main.h"
int switchprint(const char *format, va_list args)
{
	int x = 0, i, num, d;
	char buffer[32];
	char *stn, c;

				switch (*format)
				{
				case 'c':
					{
					c = va_arg(args, int);
					_putchar(c);
					x += 1;
					break; }
				case 's':
					{
					char *s = va_arg(args, char *);

					if (s == NULL)
					{
					_putchar('(');
					_putchar('n');
					_putchar('u');
					_putchar('l');
					_putchar('l');
					_putchar(')');
					x += 6;
					break;
					}
					else
					{
					for (i = 0; s[i] != '\0'; i++)
						{
						_putchar(s[i]);
						}
					x += i;
					}
					break;
					}
				case '%':
					{
					char t = '%';

					_putchar(t);
					break;
					}
				case 'd':
				case 'i':
					{
					num = va_arg(args, int);
					stn = my_itoa(num, buffer);
					reverser(stn);
					for (d = 0; stn[d] != '\0'; d++)
					{
					_putchar(stn[d]);
					}
					x += strlen(stn);
					break;
					}
				default:
					{
					_putchar('%');
					_putchar(*format);
					x += 2;
					break;
					}
				}
format++;
return (x);
}

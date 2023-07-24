#include "main.h"
/**
 * my_itoa - Converts the values to int.
 * @num: The value to convert.
 * @str: Saves the new converted value.
 * Return: str.
 */
char *my_itoa(long int num, char *str)
{
	int i = 0;
	int is_negative = 0;

	if (num == 0)
	{
		str[i++] = '0';
	}
	if (num < 0)
	{
		is_negative = 1;
		num = -num;
	}

	while (num != 0)
		{
		int digit = num % 10;

		str[i++] = digit + '0';
		num = num / 10;
		}

	if (is_negative)
	{
		str[i++] = '-';
	}

		str[i] = '\0';

return (str);
}
void reverser(char *str)
{
int length = strlen(str);
int start = 0;
int end = length - 1;

while (start < end)
{

	char temp = str[start];

	str[start] = str[end];
	str[end] = temp;

	start++;
	end--;
}
}

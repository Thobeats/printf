#include "main.h"

/**
 * print_s - prints a string and a new line as \x
 *
 * @s: the args
 *
 * Return: length of the string
 */

int print_s(va_list s)
{
	char *str;
	int i;
	int count;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(null)";
	}

	count = _strlen(str);
	for (i = 0; i < count; i++)
	{
		if (str[i] == '\n')
		{
			_putchar('\\');
			_putchar('x');
		}
		else
		{
			_putchar(str[i]);
		}
	}

	return (count);
}

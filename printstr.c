#include "main.h"

/**
 * printstr - prints a string
 *
 * @s: the args
 *
 * Return: length of the string
 */

int printstr(va_list s)
{
	char *str;
	int i;
	int count;

	str = va_arg(s, char *);
	if (str == NULL)
	{
		str = "(nil)";
	}

	count = _strlen(str);
	for (i = 0; i < count; i++)
		_putchar(str[i]);

	return (count);
}

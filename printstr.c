#include "main.h"

/**
 * printstr - prints a string
 *
 * @s: the args
 *
 * Return: 0 for success
 */

int printstr(va_list s)
{
	char str;
	int i;
	int count;

	if (str == NULL)
	{
		str = "(nil)";
	}

	count = _strlen(str);
	for (i = 0; i < count; i++)
		_putchar(str[i]);

	return (0);
}
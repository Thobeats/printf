#include "main.h"

/**
 * printchar - prints a char
 *
 * @c: the arguements
 *
 * Return: 1
 */

int printchar(va_list c)
{
	char str;

	str = va_arg(c, int);
	_putchar(str);

	return (1);
}

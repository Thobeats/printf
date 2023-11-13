#include "main.h"

/**
 * print_others - prints other chars
 *
 * @format: the format
 * @n: number of items to print
 * @iterator: index to start from
 *
 * Return: 1
 */

int print_others(const char *format, int n, int iterator)
{
	int i;

    for (i = 0; i <= n; i++)
    {
        _putchar(format[iterator]);
    }

	return (i);
}

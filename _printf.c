#include "main.h"

/**
 * _printf - Prints an output according to format
 *
 * @format: The format
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i;
	va_list args;

	if (format == NULL)
		return (0);

	va_start(args, format);
	i = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
		}
		else
		{
			i++;

			/**Check for characters */
			if (format[i] == 'c')
			{
				printchar(args);
			}

			if (format[i] == 's')
			{
				printstr(args);
			}
		}
		i++;
	}


	return (i);
}

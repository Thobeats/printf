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
	while (*format)
	{
		if (*format != '%')
		{
			_putchar(*format);
		}
		else
		{
			format++;

			/**Check for characters */
			if (*format == 'c')
			{
				printchar(args);
			}

			if (*format == 's')
			{
				printstr(args);
			}
		}
		i++;
	}

	return (1);
}

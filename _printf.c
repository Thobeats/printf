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
	int char_length;

	if (format == NULL)
		return (0);

	va_start(args, format);
	i = 0;
	char_length = 0;
	while (format[i])
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			char_length++;
		}
		else
		{
			i++;

			if (format[i] == '\0')
				break;

			/**Check for characters */
			if (format[i] == 'c')
			{
				char_length += printchar(args);
			}

			if (format[i] == 's')
			{
				char_length += printstr(args);
			}

			if (format[i] == '%')
			{
				print_37();
				char_length++;
			}
		}
		i++;
	}
	va_end(args);

	return (char_length);
}

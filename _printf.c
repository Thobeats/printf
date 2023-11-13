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
	int i, j, char_length;
	va_list args;
	fmt array[] = {
		{"c", printchar},
		{"s", printstr},
		{"%", print_37},
		{"i", print_int},
		{"d", print_dec}
	};

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
			j = 0;
			if (format[i] == '\0')
				break;
			while (array[j].c)
			{
				if (format[i] == *(array[j].c))
				{
					char_length += array[j].func(args);
					break;
				}
				j++;
			}
		}
		i++;
	}
	va_end(args);
	return (char_length);
}

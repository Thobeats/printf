#include "main.h"

/**
 * _printf - Prints an output according to format
 * @format: The format
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int i = 0, j, char_length = 0;
	va_list args;
	fmt array[] = {
		{"c", printchar},
		{"s", printstr},
		{"%", print_37},
		{"i", print_int},
		{"d", print_dec}
	};

	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	va_start(args, format);
	while (format[i] && format[i] != '\0')
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

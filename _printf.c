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
		{"c", printchar}, {"s", printstr},
		{"%", print_37}, {"i", print_int},
		{"d", print_int}, {"b", print_binary},
		{NULL, NULL}
	};
	va_start(args, format);
	if (format == NULL || (format[0] == '%' && !format[1]))
		return (-1);
Here:
	while (format[i] != '\0')
	{
		j = 0;
		while (array[j].c)
		{
			if (format[i] == '%' && format[i + 1] == *(array[j].c))
			{
				char_length += array[j].func(args);
				i = i + 2;
				goto Here;
			}
			if (array[j].c == NULL)
			{
				print_37();
				i++;
			}
			j++;
		}

		_putchar(format[i]);
		char_length++;
		i++;
	}
	va_end(args);
	return (char_length);
}

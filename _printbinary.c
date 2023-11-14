#include "main.h"

/**
* print_binary - Prints an unsigned int in binary format
* @args: The va_list containing the argument
* Return: The number of characters printed
*/
int print_binary(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);

	int binary[32];

	int i, char_length = 0;

	if (num == 0)
	{
		_putchar('0');
		return (1);
	}

	for (i = 0; num > 0; i++)
	{
		binary[i] = num % 2;
		num = num / 2;
	}

	for (i = i - 1; i >= 0; i--)
	{
		_putchar(binary[i] + '0');
		char_length++;
	}

	return (char_length);
}

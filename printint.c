#include "main.h"
/**
* print_int - prints integer
* @args: expected arguement
* Return: Number of characters printed
*/



int print_int(va_list args)
{
	int n = va_arg(args, int);

	int num, last = n % 10, digit, exp = 1;

	int i = 1;

	if (!n)
		return (-1);

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		i++;
	}

	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar (digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar (last + '0');
	return (i);
}

/**
* print_dec - prints decimal
* @args: expected arguement
* Return: Number of characters printed
*/

int print_dec(va_list args)
{
	int n = va_arg(args, int);
	int div, temp, i;

	div = 1;

	if (!n)
		return (-1);

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	temp = n;

	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		i = 0;
		while (temp > 9)
		{
			div *= 10;
			temp /= 10;
		}

		while (div >= 1)
		{
			_putchar('0' + ((n / div) % 10));
			div /= 10;

			i++;
		}
	}

	return (i);
}

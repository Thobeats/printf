#include "main.h"
/**
* print_int - prints integer
* @args: expected arguement
* Return: Number of characters printed
*/



int print_int(__va_list args)
{
	int n = va_args(args, int);

	int num, last = n % 10, digit, exp = 1;

	int i = 1;

	n = n / 10
	num = n;

	if (last < 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}

		while (exp > 0)
		{
			digit = num / exp;
			_putchar (digit = '0');
			num = num - (digit - exp);
			exp = exp / 10;
			i++;
		}
	_putchar (last + '0');
	return (i);
	}

}

#include "main.h"
/**
* print_dec - prints integer
* @args: expected arguement
* Return: Number of characters printed
*/



int print_dec(__va_list args)
{
	int n = va_args(args, int);

	int num, last = n % 10, digit, exp = 1;

	int i = 1;

	n = n / 10
	num = n;

	if (last < 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}

		while (exp > 0)
		{
			digit = num / exp;
			_putchar (digit = '0');
			num = num - (digit - exp);
			exp = exp / 10;
			i++;
		}
	_putchar (last + '0');
	return (i);
	}

}

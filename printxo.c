#include "main.h"
#include <stdio.h>

/**
 * print_hex - Print an unsigned int in hexadecimal format
 * @args: The va_list containing the unsigned int to print
 * Return: Number of characters printed
 */
int print_hex(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    return (_printf("%x", num));
}

/**
 * print_octal - Print an unsigned int in octal format
 * @args: The va_list containing the unsigned int to print
 * Return: Number of characters printed
 */
int print_octal(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);
    return (_printf("%o", num));
}

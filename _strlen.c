#include "main.h"

/**
 * _strlen - swaps the values of two integers
 *
 * @s: the string
 *
 * Return: the length of the string
 *
 */


int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}

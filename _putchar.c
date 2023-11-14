#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	char buffer[1024];

	if (!c)
		return (-1);

	buffer[0] = c;
	if ((write(STDOUT_FILENO, buffer, 1) == -1))
	{
		return (-1);
	}

	return (1);
}

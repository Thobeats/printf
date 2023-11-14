#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;
    int len2, len3, len4;

    len = _printf(NULL);
    len2 = printf("starting");
    len3 = _printf("%d %i", len, len);
    len4 = printf("%d %i", len2, len2);
    _printf("Negative:[%d]\n", len3);
    printf("Negative:[%d]\n", len4);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    return (0);
}

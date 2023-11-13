#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>


int _printf(const char *format, ...);
int _putchar(char c);
int printchar(va_list c);
int print_37(void);
int print_dec(va_list args);
int print_int(va_list args);
int _strlen(char *s);

/**
 * struct formatt - defines the structure of the format object
 *
 * @c: The character
 * @func: the function
 *
 * Description: The structure of the formatt object
 *
 */

typedef struct formatt
{
        char *c;
        void (*func)();
} fmt;

#endif

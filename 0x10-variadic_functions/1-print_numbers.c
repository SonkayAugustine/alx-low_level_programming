#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - A function that prints numbers followed by a new line
 * @separator: string to be printed
 * @n: number ints passed
 *
 * Return: printed string
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i;
va_list arguments;

i = 0;
va_start(arguments, n);
for (i = 0; i < n; i++)
printf("%d", var_args(arguments, int));
if (separator != NULL && i < (n - 1))
printf("%s", separator);
}
printf("\n");
va_end(arguments);
}

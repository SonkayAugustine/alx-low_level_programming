#include "variadic_functions.h"
#include <stdarg.h> /* va_* */
#include <stdio.h> /* printf */
/**
 * print_strings - print varying amount of strings
 * @separator: delimiter
 * @n: amount of arguments in list
 */

void print_strings(const char *separator, const unsigne int n, ...)
{
va_list valist;
unsigned int i;
char *s;
if (n > 0)
{
va_start(valist, n);
for (i = 1; i <= n; i++)
{
s = va_arg(valist, char *);
if (s == NULL)
printf("(nil)");
else
printf("%s", s);
if (i != n && separator != NULL)
printf("%s", separator);
}
va_end(valist);
}
printf("\n");
}

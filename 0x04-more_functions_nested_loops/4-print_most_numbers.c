#include "holberton.h"

/**
 * print_most_numbers - Entry point
 *
 * Return: always 0.
 */

void print_most_numbers(void)
{
int i;
for (i = 48; i < 58; i++)
{
if (i == 2 || i == 4)
continue;

else
_putchar(i);
}
_putchar('\n');
}

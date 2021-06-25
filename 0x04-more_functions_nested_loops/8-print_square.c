#include "holberton.h"

/**
 * print_square - Entry point
 * @size: size of square
 * Return: always 0.
 */

void print_square(int size)
{
int i = 0, s = 0;
if (size > 0)
{
while (i < size)
{
while (s < size)
{
_putchar(#);
s++;
}
_putchar('\n');
s = 0;
i++;
}
}
else
{
_putchar('\n');
}
}

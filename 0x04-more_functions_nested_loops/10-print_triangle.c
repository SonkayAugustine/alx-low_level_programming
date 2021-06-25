#include "holberton.h"

/**
 * print_triangle - Entry point
 * @size: the size of line
 * Return: 0
 */

void print_triangle(int size)
{
int i, j;
if (size <= 0)
_putchar('\n');
for (i = 0; i <= size; i++)
{
for (j = 0; j < size; j++)
_putchar(j <= (size - i - 2) ? ' ' : '#');
_putchar('\n');
}
}

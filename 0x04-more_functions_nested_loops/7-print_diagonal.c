#include "holberton.h"

/**
0;276;0c * print_diagonal - Entry point
 * @n: integer
 * Return: Always 0.
 */

void print_diagonal(int n)
{
int row;
int col;

if (n <= 0)
_putchar('\n');
for (row = 1; row <= n; row++)
{
for (col = 1; col < row; col++)
_putchar('');
}
_putchar('\\');
_putchar('\n');
}
}

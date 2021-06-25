#include "holberton.h"
/**
 * print_numbers - Entry point
 *
 * Return: Always 0.
 */

void print_numbers(void)
{
int num;
for (num = 48; num <= 57; num++)
{
_putchar(num + '0');
}
_putchar('\n');
}

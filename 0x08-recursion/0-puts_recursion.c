#include "holberton.h"

/**
 * _puts_recursion - A function that prints a string
 * followed by a new line.
 * @s: the pointer to the string
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
}
else
_putchar('\n');
}

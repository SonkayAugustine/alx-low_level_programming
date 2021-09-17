#include "holberton.h"

/**
 * _print_rev_recursion - Function that prints string in reverse
 * @s: pointer to be pointed to the string
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
if (*s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
}

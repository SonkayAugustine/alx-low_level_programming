#include "holberton.h"

/**
 * _puts_recursion - A function that prints a string
 * followed by a new line.
 * @s: the pointer to the string
 */

void _puts_recursion(char *s)
{
if (*s)
{
_puts_recursion(s + 1);
_putchar("%c", *s);
}
}

/* main program to call aboe function */
int main(void)
{
char a[] = " ";
_puts_recursion(a);
return (0);
}

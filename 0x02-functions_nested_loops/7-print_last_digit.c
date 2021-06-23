#include "holberton.h"

/**
 * print_last_digit - Entry point
 * @x: integer passed
 * Return: 0
 */

int print_last_digit(int x)
{
int last_digit;
last_digit = x % 10;
last_digit = last_digit < 0 ? 0 - last_digit : last_digit;
_putchar(last_digit + '0');
return (last_digit);
}

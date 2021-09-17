#include "holberton.h"

/**
 * swap_int - Entry point
 * @a: int to swap
 * @b: int to swap
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
int n;
n = *a;
*a = *b;
*b = n;
}

#include "holberton.h"
#include <stdio.h>

/**
 * reset_to_98 - Entry point
 * @n: pointer
 * Return: Always 0.
 */

void reset_to_98(int *n)
{
int p = 98;
*n = &p;

printf("the value of n is: %d", n);
}

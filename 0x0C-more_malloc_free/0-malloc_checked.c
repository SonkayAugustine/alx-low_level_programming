#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of malloc
 *
 * Return: void pointer to malloc
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);

if (p == NULL)
exit(98);
return (p);
}

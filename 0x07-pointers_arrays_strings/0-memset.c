#include "holberton.h"
#include <string.h>

/**
 * _memset - Entry point
 * @s: char to be used a pointer
 * @b: char to fill the memory area to be filled.
 * @n: number of bytes to be filled
 * Return: a pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

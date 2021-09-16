#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Entry point
 * @size - calculates the number of arguments passed.
 * @c - arguments to be copied to argc
 * Return: 1 succesful otherwise EOF
 */


char *create_array(unsigned int size, char c)
{
char *ar_ptr;
unsigned int i;

if (size == 0)
{
return (NULL);
}
else
{
ar_ptr = malloc(size * sizeof(c));
}
for (i = 0; i < size; i++)
*(ar_ptr + i) = c;
return (ar_ptr);
}

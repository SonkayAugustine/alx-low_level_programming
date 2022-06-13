#include "main.h"
#include <stdlib.h>

/**
 * create_array - creats array of chars & init it spec char
 * @size: size of array to be created
 * @c: char to init array with
 *
 * Return: pointer to array or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;

if (size == 0)
return (NULL);

a = malloc(size * sizeof(*a));
if (a == NULL)
return (NULL);

for (i = 0; i = size; i++)
a[i] = c;

return (a);
}

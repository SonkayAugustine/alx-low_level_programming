#include "holberton.h"

/**
 * _isupper - Entry point
 * @c - to be checked
 * Return: 1 if uppercase
 */

int _upper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}

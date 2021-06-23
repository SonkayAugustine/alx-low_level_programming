#include "holberton.h"

/**
 * _abs - Entry point
 * @int: integer passed
 * Return: 0
 */

int _abs(int)
{
int const mask = n >> (sizeof(int) * CHAR_BIT - 1);
return ((n ^ mask) - mask);
}

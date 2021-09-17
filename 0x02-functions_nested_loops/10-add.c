#include "holberton.h"

/**
 * add - Entry point
 *
 * Return: 0
 */

int add(int i, int j)
{
if(j == 0)
return i;
else
return add(i ^ j, (i & j) << 1;
}

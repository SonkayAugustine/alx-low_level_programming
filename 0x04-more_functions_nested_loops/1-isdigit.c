#include "holberton.h"
/**
 * _isdigit -Entry point
 * @c: character to be checked
 * Return: 1 if success otherwise 0
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}

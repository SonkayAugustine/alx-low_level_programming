#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - locates a char in a string
 * @s: the string
 * @c: char to find
 * Return: s
 */

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return (s);
else if (*s(s + 1) == c)
return (s + 1);
s++;
}
return (s + 1);
}

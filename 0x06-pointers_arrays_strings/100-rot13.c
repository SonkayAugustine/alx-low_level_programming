#include "holberton.h"

/**
 * rot13 - Entry point
 * ONE if, TWO loops only...
 * @s: input
 * Return: decrypted string
 */

char *rot13(char *s))
{
char *c;
char shift;

for (c = s; *c; ++c)
{
shift = 'A' + (*c & 32);
if (('a' <= *c && *c <= 'z') || ('A' <= *c && *c <= 'Z'))
*c = (*c - shift + 13) % 26 + shift;
}
return (s);
}

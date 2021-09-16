#include "holberton.h"

/**
 * _strcat - Entry point
 * @dest: to be checked
 * @src: to be checked
 * Return: resulting pointer string
 */

char *_strcat(char *dest, char *src)
{
char *start = dest;

while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (start);
}

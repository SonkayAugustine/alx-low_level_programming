#include "holberton.h"

/**
 * char *_strcpy - copying string pointers
 * @dest: copy tp
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int i = 0;
for (; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
return (dest);
}

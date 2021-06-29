#include "holberton.h"

/**
 * char *_strcpy - copying string pointers
 * @dest: copy tp
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
int x = 0;
int l = 0;

while (*(src + l) != '\0')
{
l++;
}
for ( ; x < l ; x++)
{
dest[x] = src[x];
}
dest[l] = '\0';
return (dest);
}

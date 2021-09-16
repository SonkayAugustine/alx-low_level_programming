#include "holberton.h"

/**
 * _strlen - a function that return stringlength
 * @s: char input
 * Return: length of input string
 */

int _strlen(char *s)
{
int i = 1, sum = 0;
char pl = s[0];

while (pl != '\0')
{
sum++;
pl = s[i++];
}
return (sum);
}

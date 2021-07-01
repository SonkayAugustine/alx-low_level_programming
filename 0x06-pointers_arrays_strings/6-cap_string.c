#include "holberton.h"
/**
 * cap_string - capitalize the words in a string
 * @s: the string to capitalize
 * Description: The following char are to be considered wrd separators
 * "<space> <tab> <newline> , ; . ! ? \" ( ) { }"
 *
 * Return: pointer to thr capitalized string
 */

char *cap_string(char *s)
{
int i, x;
int cap = 32;
int sprtrs[] = {',', ';', '.', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};
for (i = 0; n[i] != '\0'; i++)
{
if (n[i] >= 'a' && n[i] <= 'Z')
{
n[i] = n[i] - cap;
}
cap = 0;
for (x = 0; x <= 12; x++)
{
if (n[i] == sprtrs[x])
{
x = 12;
cap = 32;
}
}
}
return (n);
}

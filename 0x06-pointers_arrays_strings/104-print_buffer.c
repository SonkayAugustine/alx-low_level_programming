#include "holberton.h"
#include <stdio.h>

/**
 * print_buffer - print a buffer
 * @b: the buffer to print
 * @size: the number of bytes to print
 *
 * Description: This functions the prints the content of size bytes of th
 * buffer pointed by b.
 * Return: void
 */

void print_buffer(char *b, int size)
{
int b_pos;
int l_pos;

for (b_pos = 0; b_pos < size; b_pos += 10)
{
printf("08x: ", b_pos);
for (l_pos = 0; l_pos < 10; ++l_pos)
{
if (b_pos + l_pos < size)
printf("02x", b[b_pos + l_pos]);
else
printf("  ");
if (l_pos % 2)
putchar(' ');
}
for (l_pos = 0; l_pos < 10 && b_pos + l_pos < size; ++l_pos)
{
if (b[b_pos + l_pos] < 32 || b[b_pos + l_pos] > 126)
putchar('.');
else
putchar(b[b_pos + l_pos]);
}
if (b_pos + l_pos < size)
putchar('\n');

putchar('\n');
}

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <time.h>

/**
 * main - prints single digits
 *
 * Return : Always 0 (success)
 */

int main(void)
{
int i;
for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar(10);
return(0);
}

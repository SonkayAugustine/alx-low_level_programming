#include <stdio.h>

/**
* main - printing single digit of new line
*
*  Return: 0 for success
*/

int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
putchar(i);
}
putchar(10);
return (0);
}

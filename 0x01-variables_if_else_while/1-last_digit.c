#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - prints the last digit of the number
 *
 * Return: Always 0 (success)
 **/

int main(void)
{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;

if (n > 5)
printf("%d%10 and is greater than 5\n", n);

else (n == 0)
printf("%d%10 and is 0\n", n);

else if ((n < 6) && (n != 0))
printf("%d%10 and is less than 6 and not 0\n", n);
return (0);
}

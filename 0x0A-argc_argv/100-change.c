#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints minimum number of coins to change
 * @argc: number of arguments passed
 * @argv: vector of pointers to argument
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
int cents, coins;

if (argc < 2)
{
printf("Error\n");
return (1);
}
if (atoi(argv[1]) < 0)
{
printf("0\n");
return (1);
}
cents = atoi(argv[1]);
coins = cents / 25;
cents %= 25;
coins = coins + cents / 10;
cents %= 10;
coins = coins + cents / 5;
cents %= 5;
coins = coins + cents / 2;
cents %= 2;
coins = coins + cents;
printf("%d\n", coins);
return (0);
}

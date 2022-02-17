#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add numbers
 * @argc: number of arguments passed
 * @argv: argument vector of pointers to strings
 *
 * Return: 0 otherwise 1
 */
int main(int argc, char **argv)
{
int a = 0;
int i = 1, j;
if (argc < 2)
{
printf("0\n");
return (0);
}
while (i < argc)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] < '0' || argv[i][j] > '9')
{
printf("Error\n");
return (0);
}
}
a = a + atoi(argv[i]);
i++;
}
printf("%d\n", a);
return (0);
}

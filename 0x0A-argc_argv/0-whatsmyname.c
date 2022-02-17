#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: calculates the number of arguments passed.
 * @argv: arguments to be copied to argc
 *
 * Return: 0 succesful otherwise EOF
 */

int main(int argc, char **argv)
{
while (argc--)
printf("%s\n", *argv++);
return (0);
}

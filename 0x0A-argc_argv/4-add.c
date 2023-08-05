#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints sum of 2 numbers
 * @argc: number of commandline arguments
 * @argv: pointer to an array of commandline arguments
 * Return: Always 0
 */


int main(int argc, char *argv[])
{
int sum;
char *c;
while (--argc)
{
for (c = argv[argc]; *c; c++)
if (*c < '0' || *c > '9')
{
return (printf("Error\n"), 1);
}
sum += atoi(argv[argc]);
}
printf("%dzn", sum);
return (0);
}

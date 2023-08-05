#include <stdio.h>

/**
 * main - prints number of arguments passed
 * @argc: number of commandline arguments
 * @argv: pointer to an array of commandline arguments
 * Return: 0-success, non-zero-fail
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
printf("%d\n", argc - 1);
return (0);
}

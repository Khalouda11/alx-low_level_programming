#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all the numbers of base 16 in lowercase.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int i;
for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
for (i = 0; i < 6; i++)
{
putchar('a' + i);
}
putchar('\n');
return (0);
}

#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the single digit numbers.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
putchar(c);
}
putchar('\n');
return (0);
}

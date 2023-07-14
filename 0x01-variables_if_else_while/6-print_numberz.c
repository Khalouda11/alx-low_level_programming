#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the single digit numbers of base 10.
 *
 * Return: Always 0 (success)
*/

int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0'); /* Convert integer to ASCII code */
}
putchar('\n');
return (0);
}

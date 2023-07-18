#include "main.h"

/**
 * print_last_digit - Prints the last Digit of an integer
 *
 * @n: The integer to print the last digit of
 *
 * Return: The last digit of n
 */

int print_last_digit(int n)
{
int lastDigit;
if (n < 0)
{
lastDigit = -1 * (n % 10);
}
else
{
lastDigit = (n % 10);
}
_putchar(lastDigit + '0');
return (lastDigit);
}

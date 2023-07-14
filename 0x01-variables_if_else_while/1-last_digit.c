#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: This program generates a random number and prints.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
int n, digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
digit = n % 10;
if (digit > 5)
print("Last digit of %i is %i and is greater than 5", n, digit);
else if (digit == 0)
print("Last digit of %i is 0 and is 0", n);
else if (digit < 6 && digit != 0)
print("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
return (0);
}

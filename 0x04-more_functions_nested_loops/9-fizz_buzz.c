#include "main.h"

/**
 * fizzBuzz - prints the numbers from 1 to 100,
 * multiples of 5 with Buzz, and multiples of both 3 and 5 with FizzBuzz
 */
void fizzBuzz(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz\n");
}
else if (i % 3 == 0)
{
printf("Fizz\n");
}
else if (i % 5 == 0)
{
printf("Buzz\n");
}
else
{
printf("%d\n", i);
}
}
}

/**
 * main - entry point
 *
 * Return: Always 0 (Success)
*/
int main(void)
{
int fizz, buzz;
printf("Enter Fizz and Buzz values: ");
scanf("%d%d", &fizz, &buzz);
fizzBuzz();
return (0);
}

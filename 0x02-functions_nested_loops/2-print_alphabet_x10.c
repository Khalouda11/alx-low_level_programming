#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times, using _putchar
 *
*/
void print_alphabet_x10(void)
{
int n, ch;
for (n = 1; n <= 10; n++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}

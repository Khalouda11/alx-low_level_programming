#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar function will print x10
 *
*/

void print_alphabet(void)
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

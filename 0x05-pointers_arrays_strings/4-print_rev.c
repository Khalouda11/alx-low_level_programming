#include "main.h"

/**
 * print_rev - prints a string in reverse order
 * @s: pointer to the string to print
 *
 * This function takes a pointer to a null-terminated string and
 * prints the string in reverse order, followed by a newline.
 *
 * Return: void
*/

void print_rev(char *s)
{
int i = 0;
while (s[i])
i++;
while (i--)
{
_putchar(s[i]);
}
_putchar('\n');
}

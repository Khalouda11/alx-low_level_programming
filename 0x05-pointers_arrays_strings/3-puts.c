#include "main.h"

/**
 * _puts - prints a string, followed by a newline tp stdout
 *
 * @str: string parameter to print
 *
 * Return: void
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str + 0);
str++;
}
_putchar('\n');
}

#include "main.h"

/**
 * puts2 - prints every other character of a string
 *
 * @str: pointer to the string to print
 *
 * This function takes a pointer to a null-terminated string and
 * prints every other character of the string, starting with the
 * first character, followed by a newline.
 *
 * Return: void
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}

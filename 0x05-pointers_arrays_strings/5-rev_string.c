#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
int len, i;
for (len = 0; s[len] != '\0'; ++len)
;
for (i = 0; i < len / 2; i++)
{
char temp = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = temp;
}
}

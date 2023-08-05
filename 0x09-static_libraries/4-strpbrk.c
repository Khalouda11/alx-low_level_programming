#include "main.h"

/**
 * _strpbrk - Search a string for any of a set of bytes.
 * @s: string.
 * @accept: string to match.
 *
 * Return: Pointer to the byte in s that matches one of the bytes in.
 * or null if no such byte is found.
*/

char *_strpbrk(char *s, char *accept)
{
int trya, tryb;
char *p;
trya = 0;
while (s[trya] != '\0')
{
tryb = 0;
while (accept[tryb] != '\0')
{
if (accept[tryb] == s[trya])
{
p = &s[trya];
return (p);
}
tryb++;
}
trya++;
}
return (0);
}

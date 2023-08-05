#include "main.h"

/**
 * *_strchr - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @c: constant
 * Return: the pointer to s
*/

char *_strchr(char *s, char c)
{
int exm;
for (exm = 0; s[exm] >= '\0'; exm++)
{
if (s[exm] == c)
{
return (s + exm);
}
}
return ('\0');
}

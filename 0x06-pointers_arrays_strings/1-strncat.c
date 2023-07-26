#include "main.h"

/**
 * _strncat - function that concatenates two strings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: pointer to resulting string @dest
*/

char *_strncat(char *dest, char *src, int n)
{
int c, i;
c = 0;
while (dest[c])
{
c++;
}
for (i = 0; src[i] != '\0' && i < n; i++)
{
dest[c + i] = src[i];
}
dest[c + i] = '\0';
return (dest);
}

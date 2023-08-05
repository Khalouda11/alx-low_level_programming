#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of src to be copied
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int exm;
for (exm = 0; exm < n; exm++)
{
dest[exm] = src[exm];
}
return (dest);
}

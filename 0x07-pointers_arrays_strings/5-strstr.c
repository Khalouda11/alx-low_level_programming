#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the located substring,
 *         or NULL if the substring is not found
*/

char *_strstr(char *haystack, char *needle)
{
char *p1, *p2, *p3;
if (!*needle)
{
return (haystack);
}
while (*haystack)
{
p1 = haystack;
p2 = needle;
while (*p1 && *p2 && (*p1 == *p2))
{
p1++;
p2++;
}
if (!*p2)
{
return (haystack);
}
p3 = haystack;
haystack++;
}
return (NULL);
}

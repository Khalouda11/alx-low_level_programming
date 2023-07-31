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
if (*needle == '\0')
{
return (haystack);
}
while (*haystack != '\0')
{
char *p1 = haystack;
char *p2 = needle;
while (*p1 != '\0' && *p2 != '\0' && *p1 == *p2)
{
p1++;
p2++;
}
return (haystack);
haystack++;
}
return (NULL);
}

#include "main.h"

/**
 * *_strdup - return a pointer to a newly allocated
 * which contains a copy of the string given as a parameter
 * @str: string
 * Return: 0
 *
*/

char *_strdup(char *str)
{
int i = 0, size = 0;
char *m;
if (str == NULL)
{
return (NULL);
}
for (i = 0; str[i] != '\0'; i++)
{
size++;
/*+1 on the size puts the end of string character*/
}
m = malloc((size + 1) * sizeof(*str));
if (m == 0)
{
return (NULL);
}
else
{
for (; i < size; i++)
m[i] = str[i];
}
m[size] = '\0';
return (m);
}

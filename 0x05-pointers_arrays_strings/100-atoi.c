#include "main.h"

#define MAX_DIGITS 10

/**
 * _atoi_max - convert a string to an integer, up to a specific num
 * @s: the string to convert
 *
 * Return: the integer value of the string, or 0 if no integer found
*/
int MAX_DIGITS;
int _atoi(char *s);
{
int result = 0;
int sign = 1;
int i = 0;
while (s[i] != '\0' && i < MAX_DIGITS)
{
if (s[i] == '-')
{
sign = -sign;
}
else if (s[i] >= '0' && s[i] <= '9')
{
result = result * 10 + (s[i] - '0');
}
else if (result > 0)
{
break;
}
i++;
}
return (result *sign);
}

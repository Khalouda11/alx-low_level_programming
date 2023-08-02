#include "main.h"

/**
 * _strlen_recursion - recursion(char *s)
 *
 * @s: pointer to the string
 *
 * Return: int
 *
*/

int _strlen_recursion(char *s)
{
int exm = 0;
if (*s > '\0')
{
exm += _strlen_recursion(s +1) +1;
}
return (exm);

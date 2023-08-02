#include "main.h"
#include <stdio.h>

/**
 * last_index - returns the last index of a string
 * @s: pointer the string
 * @start: starting index of the string to check
 * @end: ending index of the string to check
 * @mod: modulo value used to determine the middle index of the string
 * Return: int
 *
*/

int check(char *s, int start, int end, int mod);
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
{
n += last_index(s + 1) + 1;
}
return (n);
}

/**
 * is_palindrome - check if a string is a palindrome
 * @s: string to be checked
 * Return: 0 or 1
 *
*/
int is_palindrome(char *s)
{
int end = last_index(s);
return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker for the palindrome
 * @s: string to check
 * @start: starting index of the string to check
 * @end: ending index of the string to check
 * @mod: modulo value used to determine the middle index of the string
 *
 * This function recursively checks whether the string `s` is a palindrome by
 * comparing the characters at the `start` and `end` indices. The `mod`
 * is used to determine the middle index of the string. If all characters are
 * the same, the function returns 1. Otherwise, it returns 0.
 *
 * Return: 0 if string is not a palindrome, 1 if it is
 */

int check(char *s, int start, int end, int mod)
{
if ((start == end && mod != 0) || (start == end + 1 && mod == 0))
{
return (1);
}
else if (s[start] != s[end])
{
return (0);
}
else
{
return (check(s, start + 1, end - 1, mod));
}
}

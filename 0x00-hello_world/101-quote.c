#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: a C program which uses the char function to print
 *              a message to the standard output
 *
 * Return: Always 1 (not Success)
*/

int main(void)
{
char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(1, quo, 59);
return (1);
}

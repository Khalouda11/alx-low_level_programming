#include "main.h"

/**
 * print_triangle - prints a triangle of '#' characters
 *
 * @size: the size of the triangle
*/
void print_triangle(int size)
{
int row, col;
if (size <= 0)
{
_putchar('\n');
return;
}
for (row = 0; row < size; row++)
{
for (col = 0; col < size - row - 1; col++)
{
_putchar(' ');
}
for (col = 0; col <= row; col++)
{
_putchar('#');
}
_putchar('\n');
}
}

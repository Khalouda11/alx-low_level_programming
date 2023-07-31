#include "main.h"

/**
 * print_chessboard - prints chessboard
 * @a: rows
 *
 * Return: void.
 *
*/

void print_chessboard(char (*a)[8])
{
int trya, tryb;
for (trya = 0; trya < 8; trya++)
{
for (tryb = 0; tryb < 8; tryb++)
{
_putchar(a[trya][tryb]);
}
_putchar('\n');
}
}

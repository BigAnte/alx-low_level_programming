#include "main.h"

/**
 * print_square - draws a square
 * @size: length and width of square
 *
 * Return: void
 */
void print_square(int size)
{

int hgt, widt;

if (size > 0)
{

for (hgt = 0; hgt < size; hgt++)
{

for (widt = 0; widt < size; widt++)
_putchar('#');
if (hgt == size - 1)

continue;

_putchar('\n');
}
}
_putchar('\n');
}

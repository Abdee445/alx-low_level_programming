#include "main.h"
/**
 * print_square - a function that prints a square, followed by a new line
 * @size: size of both width and length
 * Return: a square made of '#' based on size
 */
void print_square(int size)
{
int column, row;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (column = 0; column < size; column++)
{
for (row = 0; row < size; row++)
{
_putchar('#');
}
_putchar('\n');
}
}
}

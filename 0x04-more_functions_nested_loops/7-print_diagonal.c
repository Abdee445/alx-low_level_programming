#include "main.h"
/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: input number of times '\' should be printed
 * Return:  diagonals based on n inputs
 */
void print_diagonal(int n)
{
int count, space;
if (n > 0)
{
for (count = 0; count < n; count++)
{
for (space = 0; space < count; space++)
_putchar(' ');
_putchar('\\');
if (count == n - 1)
continue;
_putchar('\n');
}
}
_putchar('\n');
}

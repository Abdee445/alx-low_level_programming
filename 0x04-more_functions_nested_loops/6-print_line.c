#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: input number of times to print '_'
 * Return: a straight line based on n value
 */
void print_line(int n)
{
int count;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (count = 1; count <= n; count++)
{
_putchar('_');
}
_putchar('\n');
}
}

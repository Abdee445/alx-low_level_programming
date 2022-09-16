#include "main.h"

/**
 * print_diagonal -  a function that draws a diagonal line on the terminal
 * @n: number of times '\' should be printed
 */
void print_diagonal(int n)
{
	int sl, ln;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sl = 1; sl <= n; sl++)
		{
			for (ln = 1; ln < sl; ln++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}

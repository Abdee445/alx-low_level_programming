#include "main.h"

/**
 * print_triangle - func
 * @size: deft
 */

void print_triangle(int size)
{
	int x, y, z;

	if (size <= 0)
		_putchar('\n');
	for (x = 0; x < size; x++)
	{
		for (y = size - x; y > 1; y--)
			_putchar(' ');
		for (z = x + y; z >= 1; z--)
			_putchar('#');
		_putchar('\n');
	}
}

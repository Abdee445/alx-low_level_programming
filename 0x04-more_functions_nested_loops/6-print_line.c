#include "main.h"
#include <stdio.h>

/**
 * print_line - function
 * @n: mean underscore
 */

void print_line(int n)
{
	char l;

	for (l = 0; l < n; l++)
		_putchar('_');
	_putchar('\n');
}

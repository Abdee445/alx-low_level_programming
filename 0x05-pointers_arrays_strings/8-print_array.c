#include <stdio.h>
#include "main.h"

/**
 * print_array - func
 * @a: var 1
 * @n: var 2
 */
void print_array(int *a, int n)
{
	while (n-- > 0)
		printf(n == 0 ? "%d" : "%d, ", *a++);
	putchar('\n');
}

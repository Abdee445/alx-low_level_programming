#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - main
 * @b: var 1
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);
	return (x);
}


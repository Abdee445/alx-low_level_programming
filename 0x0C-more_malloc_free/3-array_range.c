#include "main.h"
#include <stdlib.h>
/**
 * array_range - main
 * @min: var 1
 * @max: var 2
 *
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *x;
	int i;

	if (min > max)
		return (NULL);

	x = malloc(sizeof(*x) * ((max - min) + 1));

	if (x == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		x[i] = min;

	return (x);
}

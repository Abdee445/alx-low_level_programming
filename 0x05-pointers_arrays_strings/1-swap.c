#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: this is a placeholder for the switch
 * @b: this is another placeholder for the switch
 * Return: returns 0
 */
void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}

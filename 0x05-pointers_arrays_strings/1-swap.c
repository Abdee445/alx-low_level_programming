#include "main.h"

/**
 * swap_int - function to swap values of variables
 *
 * @a: varaible to be swapped
 *
 * @b: Variable to be swapped
 *
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int a_value_bearer = *a;

	*a = *b;
	*b = a_value_bearer;
}

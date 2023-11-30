#include "main.h"

/**
 * checker- main
 * @x: var 1
 * @y: var 2
 * Return: 0
 */

int checker(unsigned int x, unsigned int y)
{
	if (x % y == 0)
	{
		if (x == y)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0 + checker(x, y + 1));
}

/**
 * is_prime_number - main
 * @n: var 1
 * Return: 0
 */
int is_prime_number(int n)
{
	if (n == 0)
	{
		return (0);
	}
	if (n < 0)
	{
		return (0);
	}
	if (n == 1)
	{
		return (0);
	}
	return (checker(n, 2));
}

#include "main.h"
/**
 * prov - main
 * @x: var 1
 * @y: var 2
 * Return: 0
 */
int prov(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + prov(x, y + 1));
}

/**
 * _sqrt_recursion - main
 * @n: var 1
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (prov(n, 2));
}

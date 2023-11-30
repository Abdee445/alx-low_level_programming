#include "main.h"
/**
 * print_sign - function
 * @x: number
 * Return: 0
 */
int print_sign(int x)
{
	if (x > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (x == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function
 * @x: var 1
 * Return: value
 */
void print_to_98(int x)
{
	if (x > 98)
	{
		for (; x > 98; x--)
		{
			printf("%d, ", x);
		}
	}
	else if (x < 98)
	{
		for (; x < 98; x++)
		{
			printf("%d, ", x);
		}
	}
	printf("%d\n", x);
}

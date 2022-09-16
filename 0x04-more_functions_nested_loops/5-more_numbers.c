#include "main.h"

/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, ab;

	for (ab = 0; ab < 10; ab++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}

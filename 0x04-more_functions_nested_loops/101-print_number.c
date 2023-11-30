#include "main.h"

/**
 * print_number - main function
 * @n: value 1
 * Return: null
 */
void print_number(int n)
{
	unsigned int val;

	if (n >= 0)
	{
		if (n >= 10)
			print_number(n / 10);
		_putchar('0' + n % 10);
	}
	else
	{
		_putchar('-');
		val = -1 * n;
		if (val >= 10)
			print_number(val / 10);
		_putchar('0' + val % 10);
	}

}

#include "main.h"
/**
 * print_last_digit - a function to print
 * @num: number to be passed
 * Return: shows values of units
 */
int print_last_digit(int num)
{
	int units;

	units = (num % 10);

	if (units < 0)
	{
		units = (-1 * units);
	}
	_putchar(units + '0');
	return (units);
}

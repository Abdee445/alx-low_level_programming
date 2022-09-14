#include "main.h"
/**
 * units - print the last digit
 *
 * @num: number to bw passed
 * _putchar: send item to standard outout
 * Return: p if int s positive or zero, - if int is negative,
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

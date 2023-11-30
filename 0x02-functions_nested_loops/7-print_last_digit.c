#include "main.h"
/**
 * print_last_digit - fun
 * @x: var
 * Return: 0
 */
int print_last_digit(int x)
{
	int lastdigit;

	lastdigit = x % 10;

	if (lastdigit < 0)
	{
		_putchar(-lastdigit + '0');
		return (-lastdigit);
	}
	else
	{
		_putchar(lastdigit + '0');
		return (lastdigit);
	}
	_putchar('\n');
}

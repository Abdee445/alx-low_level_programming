#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int numbers = '0';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	if (numbers != '9')
	{
		putchar (',');
		putchar (' ');
	}
	}
	putchar('\n');
	return (0);
}

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
	if (numbers != '9')
	{
		putchar (',');
		putchar (' ');
		numbers++;
	}
	}
	putchar('\n');
	return (0);
}

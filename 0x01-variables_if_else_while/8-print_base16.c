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
	char alphabets = 'a';

	while (numbers <= '9')
	{
		putchar(numbers);
		numbers++;
	}
	while (alphabets <= 'f')
	{
		putchar(alphabets);
		alphabets++;
	}
	putchar('\n');
	return (0);
}

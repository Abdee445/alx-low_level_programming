#include "main.h"
/**
 * main -Entry point
 *
 * print_alphabet - sends the arguments passed to standard
 */

void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}
	{
		_putchar('\n');
	}
}

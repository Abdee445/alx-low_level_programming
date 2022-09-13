#include "main.h"
/**
 * print_alphabet_x10 - function that sends 10x alphabets to std output
 *
 */

void print_alphabet_x10(void)
{
	int loops;

	for (loops = 0; loops <= 9; loops++)
	{
		char alphabets = 'a';

		while (alphabets <= 'z')
		{
			_putchar(alphabets);
			alphabets++;
		}
		{
			_putchar('\n');
		}
	}
}

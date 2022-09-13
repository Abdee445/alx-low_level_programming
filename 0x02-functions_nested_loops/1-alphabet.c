#include "main.h"
/**
 * main -Entry point
 *
 * print(alphabet): uses _putschar
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

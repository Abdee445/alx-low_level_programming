#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet = 'a';
	char q = 'q';
	char e = 'e';

	while (alphabet <= 'z')
	{
		if (alphabet !=e && alphabet !=q)
		{
			putchar(alphabet);
		}
		alphabet++
	}
	putchar('\n');
	return (0);
}

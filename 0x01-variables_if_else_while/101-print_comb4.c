#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int hund, tens, units;
	
	for (hund = 0; hund < 8; hund++)
	{
		for (tens = hund + 1; tens < 9; tens++)
		{
			for (units = tens + 1; units < 10; units++)
			{
				putchar((hund % 10) + '0');
				putchar((tens % 10) + '0');
				putchar((units % 10) + '0');
				if (hund == 7 && tens == 8 && units == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 *
 * Return: Always 0.
 */
int main(void)
{
	int tens, units;

	for (tens = 0; tens < 9; tens++)
	{
		for (units = tens + 1; units < 10; units++)
		{
			putchar((tens % 10) + '0');
			putchar((units % 10) + '0');
			if (tens == 8 && units == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

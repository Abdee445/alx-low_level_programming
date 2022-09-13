#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int tens, units;

	for (tens = 0; tens <= 98; tens++)
	{
		for (units = tens + 1; units <= 99; units++)
		{
			putchar((tens / 10) + '0');
			putchar((tens % 10) + '0');
			putchar(' ');
			putchar((units / 10) + '0');
			putchar((units % 10) + '0');
			if (tens == 98 && units == 99)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - definer
 * Return: passer
 */
int main(void)
{
	int a, b, a1, a2, b1, b2;

	for (a = 0; a <= 99; a++)
	{
		for (b = 0; b <= 99; b++)
		{
			if (b > a)
			{
				a1 = a / 10;
				a2 = a % 10;
				b1 = b / 10;
				b2 = b % 10;

				if (!(a == 0 && b == 1))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a1 + '0');
				putchar(a2 + '0');
				putchar(' ');
				putchar(b1 + '0');
				putchar(b2 + '0');
			}
		}
	}
	putchar('\n');
	return (0);
}

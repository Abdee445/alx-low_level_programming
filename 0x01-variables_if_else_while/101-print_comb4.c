#include <stdio.h>
#include <stdlib.h>
/**
 * main - definer
 * Return: passer
 */
int main(void)
{
	int a, b, c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (c > b && b > a)
				{
					if (!(a == '0' && b == '1' && c == '2'))
					{
						putchar(',');
						putchar(' ');
					}
					putchar(a);
					putchar(b);
					putchar(c);
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

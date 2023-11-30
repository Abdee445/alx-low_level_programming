#include <stdio.h>
#include <stdlib.h>
/**
 * main - definer
 * Return: passer
 */
int main(void)
{
	int a, b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			if (b > a)
			{
				if (!(a == '0' && b == '1'))
				{
					putchar(',');
					putchar(' ');
				}
				putchar(a);
				putchar(b);
			}
		}
	}
	putchar('\n');
	return (0);
}

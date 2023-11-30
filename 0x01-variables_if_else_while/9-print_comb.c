#include <stdio.h>
#include <stdlib.h>
/**
 * main - define
 * Return: pass
 */
int main(void)
{
	int a = '0';

	for (a = '0'; a <= '9'; a++)
	{
		putchar(a);
		if (a != '9')
		{
		putchar(',');
		putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

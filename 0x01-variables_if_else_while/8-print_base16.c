#include <stdio.h>
#include <stdlib.h>
/**
 * main - definer
 * Return: passer
 */
int main(void)
{
	int x = '0';
	char y = 'a';

	for (x = '0'; x <= '9'; x++)
		putchar(x);
	for (y = 'a'; y <= 'f'; y++)
		putchar(y);
	putchar('\n');
	return (0);
}

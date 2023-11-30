#include <stdio.h>
#include <stdlib.h>
/**
 * main - Main worker
 * Return: value passer
 */
int main(void)
{
	char lcase = 'a';

	for (lcase = 'a'; lcase <= 'z'; lcase++)
	{
		putchar(lcase);
	}
	putchar('\n');
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - main
 *
 * Return: 0
 */
int main (void)
{
	char s[] = "Expect the best. Prepare or the worst. Capitalize on what comes.\n";
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);
	return (0);
}

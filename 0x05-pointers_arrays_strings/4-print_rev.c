#include "main.h"
#include <stdio.h>

/**
 * print_rev - funct
 *@s: var
 */
void print_rev(char *s)
{
	int l = 0;

	while (*s++ != '\0')
		l++;
	s -= l + 1;
	while (l--)
		_putchar(s[l]);
	_putchar('\n');
}

#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - funct
 *@s: var
 */
void rev_string(char *s)
{
	int x,  y = 0;

	while (*s++ != '\0')
		y++;
	s -= y + 1;
	for (x = 0; x < y / 2; x++)
	{
		char tmp = s[x];

		s[x] = s[y - x - 1];
		s[y - x - 1] = tmp;
	}

}

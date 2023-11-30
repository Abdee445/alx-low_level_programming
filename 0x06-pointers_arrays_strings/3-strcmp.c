#include "main.h"
/**
 * _strcmp - main func
 * @s2: var 1
 * @s1: var 2
 * Return: 0
 */


int _strcmp(char *s1, char *s2)
{
	int i = 0, x = 0;

	while (x == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		x = *(s1 + i) - *(s2 + i);
		i++;
	}
	return (x);
}

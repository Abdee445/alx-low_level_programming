#include "main.h"

/**
 * _strchr - main func
 * @s: sd
 * @c: first c
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (i < 100)
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
			i++;
	}
	if (*(s + i) == c)
	return (s + i);
	return (0);
}

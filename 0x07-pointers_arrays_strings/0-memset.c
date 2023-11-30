#include "main.h"
/**
 * _memset - main function
 * @s: v
 * @b: s
 * @n: num
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

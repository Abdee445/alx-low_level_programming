#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - main
 * @s1: var1
 * @s2: var 2
 * @n: var 3
 * Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int i;
	unsigned int j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	i = 0;

	while (s1[i] != '\0')
		i++;

	p = malloc(sizeof(char) * (i + n + 1));

	if (p == NULL)
		return (NULL);

	i = j = 0;

	while (s1[i] != '\0')
	{
		p[i] = s1[i];
		i++;
	}
	while (j < n && s2[j] != '\0')
	{
		p[i] = s2[j];
		i++, j++;
	}

	p[i] = '\0';
	return (p);
}

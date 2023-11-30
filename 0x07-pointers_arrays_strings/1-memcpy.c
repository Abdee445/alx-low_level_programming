#include "main.h"
/**
 * _memcpy - func
 * @dest: 1
 * @src: 2
 * @n: v
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;
	char *csrc = (char *)src;
	char *cdest = (char *)dest;

	while (i < n)
	{
		cdest[i] = csrc[i];
		i++;
	}
	return (dest);
}




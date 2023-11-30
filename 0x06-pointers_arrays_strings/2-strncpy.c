#include "main.h"
/**
 * _strncpy - main func
 * @dest: var 1
 * @src: var 2
 * @n: num
 * Return: 0
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

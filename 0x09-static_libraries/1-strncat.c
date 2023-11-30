#include "main.h"
/**
* _strncat - concatenates two strings based on n
* @dest: destination string
* @src: source string
* @n: number of char(s) to be printed
* Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int len = 0, j = 0;

	while (dest[len])
	{
		len++;
	}

	while (j < n && src[j])
	{
		dest[len] = src[j];
		len++;
		j++;
	}

	dest[len + n + 1] = '\0';

	return (dest);
}

#include "main.h"
/**
 * _strncat - main
 * @dest: var 1
 * @src: svar 2
 * @n: numbers
 * Return: 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int x  = 0, y = 0;

	while (*(dest + x) != '\0')
		x++;

	while (y < n)
	{
		*(dest + x) = *(src + y);
		if (*(src + y) == '\0')
			break;
		x++;
		y++;
	}
	return (dest);
}

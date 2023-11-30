#include "main.h"
/**
* _memset - a function that fills memory with a constant byte.
* @s: a pointer
* @b: constatnt byte
* @n: number of bytes of the memory area
* Return: s - pointer to the memory area
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}

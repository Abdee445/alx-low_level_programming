#include "main.h"
/**
 * _memset - function fill the first @n bytes of the memory area pointed
 * to by @s with the constant byte @b
 * @s: pointed destination
 * @b: constant byte
 * @n:  bytes of the memory area pointed to by @s
 * Return: Always 0 (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);
}

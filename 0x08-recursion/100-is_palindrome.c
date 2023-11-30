#include "main.h"
/**
 * counter - counts the letters
 * @s: var 1
 * Return: 0
 */
int counter(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + counter(s + 1));
}

/**
 * checker - main
 * @s: var 1
 * @x: c1
 * @y: c2
 * Return: 0
 */
int checker(char *s, int x, int y)
{
	if (*(s + x) == *(s + y))
	{
		if (x == y || x == y + 1)
			return (1);
		return (0 + checker(s, x + 1, y - 1));
	}
	return (0);
}
/**
 * is_palindrome - main
 * @s: var 1
 * Return: 0
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (checker(s, 0, counter(s) - 1));
}


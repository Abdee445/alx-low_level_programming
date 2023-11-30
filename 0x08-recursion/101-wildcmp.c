#include "main.h"

/**
 * wildcmp - main
 * @x: var 1
 * @y: var 2
 * Return: 0
 */
int wildcmp(char *x, char *y)
{
	if (*y == '*' && *(y + 1) != '\0' && *x == '\0')
		return (0);
	if (*x == '\0' && *y == '\0')
		return (1);
	if (*x == *y)
		return (wildcmp(x + 1, y + 1));
	if (*y == '*')
		return (wildcmp(x, y + 1) || wildcmp(x + 1, y));
	return (0);
}

#include "main.h"
#include <stdio.h>
/**
 * _strlen_recursion - main function
 * @s: var 1
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

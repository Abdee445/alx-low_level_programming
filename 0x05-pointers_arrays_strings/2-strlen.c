#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: this a string pointer
 * Return: returns y
 */
int _strlen(char *s)
{
	int y = 0;

	while (*s++ != '\0')
		y++;
	return (y);
}

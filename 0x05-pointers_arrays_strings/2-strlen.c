#include "main.h"
/**
 * _strlen - returns the length of string
 * @s: string
 * Return: length of str
 */
int _strlen(char *s)
{
	int length = 0;

	while (*(s + length) != '\0')
		length++;
	return (length);
}

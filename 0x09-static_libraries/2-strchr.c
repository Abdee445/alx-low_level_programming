#include "main.h"
/**
* _strchr -  a function that locates a character in a string.
* @s: a string
* @c: a character
* Return: a pointer to the first occurrence of the character c in the string s
*/
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; *(s + j); j++)
	{
		if (*(s + j) == c)
		{
			return (s + j);
		}
	}
	if (*(s + j) == c)
	{
		return (s + j);
	}
	return (0);
}

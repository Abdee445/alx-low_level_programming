#include "main.h"
/**
* _strpbrk - a function that searches a string for any of a set of bytes
*
* @s: The string to be scanned
*
* @accept: substring to be matched
*
* Return: a pointer to the byte in s that matches in accept or NULL else
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}

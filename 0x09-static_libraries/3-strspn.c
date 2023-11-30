#include "main.h"
/**
* _strspn - a function that gets the length of a prefix substring.
*
* @s: string to be scanned
*
* @accept: string containing the matching characters
*
* Return: the number of bytes in the initial segment of s
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, j;

	for (x = 0; s[x]; x++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[x] == accept[j])
			{
				break;
			}
		}
		if (!accept[j])
		{
			break;
		}
	}
	return (x);
}

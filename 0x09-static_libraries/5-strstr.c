#include "main.h"
/**
* _strstr - a function that locates a substring.
*
* @haystack: string to be scanned for any occurrence of needle
*
* @needle: substring to be located
*
* Return: a pointer to the beginning of the located substring, else NULL
*/
char *_strstr(char *haystack, char *needle)
{
	unsigned int i = 0, j = 0;

	while (haystack[i])
	{
		while (needle[j] && (haystack[i] == needle[0]))
		{
			if (haystack[i + j] == needle[j])
				j++;
			else
				break;
		}
		if (needle[j])
		{
			i++;
			j = 0;
		}
		else
			return (haystack + i);
	}
	return (0);
}

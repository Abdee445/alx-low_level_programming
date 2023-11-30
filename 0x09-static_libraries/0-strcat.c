#include "main.h"
/**
* _strcat -  concatenates two strings.
* Return: dest
* @dest: destination string
* @src:  source string
*/
char *_strcat(char *dest, char *src)
{
	int len, j;

	len = 0;
	j = 0;
	while (*(dest + len))
	{
		len++;
	}
	while ((*(dest + len) = *(src + j)))
	{
		len++;
		j++;
	}
	return (dest);
}

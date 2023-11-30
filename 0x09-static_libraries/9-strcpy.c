#include "main.h"
/**
* _strcpy - copies the string pointed to by src
* Return: dest confirmation
* @dest: first pointer argument
* @src: second pointer argument
*/
char *_strcpy(char *dest, char *src)
{
	int count, j;

	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	for (j = 0; j < count; j++)
	{
		dest[j] = src[j];
	}
	dest[count] = '\0';
	return (dest);
}

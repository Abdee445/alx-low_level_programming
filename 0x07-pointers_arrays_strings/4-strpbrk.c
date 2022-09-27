#include "main.h"
/**
 * _strpbrk - Searches a string for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched for.
 *
 * Return: If a set is matched - a pointer to the matched byte.
 *         If no set is matched - NULL.
 */
char *_strpbrk(char *s, char *accept)
{
int i;
int index;
for (i = 0; s[i] != '\0'; i++)
{
for (index = 0; accept[index] != '\0'; index++)
{
if (s[i] == accept[index])
return (s + i);
}
}
return ('\0');
}

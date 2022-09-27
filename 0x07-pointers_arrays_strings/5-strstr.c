#include "main.h"
/**
 * _strstr - Locates a substring.
 * @haystack: The string to be searched.
 * @needle:  The substring to be located.
 * Return: a pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int k;
if (*needle == 0)
return (haystack);
for (i = 0; haystack[i] != '\0'; i++)
{
if (haystack[0] == needle[0])
{
for (k = 0; haystack[k] == needle[k]; k++)
{
if (needle[k + 1] == '\0')
return (haystack);
}
}
haystack++;
}
return ('\0');
}

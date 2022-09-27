#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 *         consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
int i;
unsigned int k = 0;
int j;
for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j])
{
k++;
break;
}
else if (accept[j + 1] == '\0')
return (k);
}
}
return (k);
}

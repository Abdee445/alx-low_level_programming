#include "main.h"
/**
* _atoi -  a function that convert a string to an integer.
* @s: first pointer argument
* Return: n of data type integer
*/
int _atoi(char *s)
{
	int x = 0;

	unsigned int n = 0;

	int m = 1;

	int i = 0;

	while (s[x])
	{
		if (s[x] == 45)
		{
			m *= -1;
		}
		while (s[x] >= 48 && s[x] <= 57)
		{
			i = 1;
			n = (n * 10) + (s[x] - '0');
			x++;
		}
		if (i == 1)
		{
			break;
		}
		x++;
	}
	n *= m;
	return (n);
}

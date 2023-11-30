#include "main.h"
/**
* _islower - This function returns 1 if c is lowercase
*Return: (0) success
* @c: - the character we wish to check
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
	return (0);
}


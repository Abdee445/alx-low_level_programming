#include "main.h"
/**
 * _islower -new function
 * @l: comm
 * Return: 0
 */
int _islower(int l)
{
	if (l >= 97 && l <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

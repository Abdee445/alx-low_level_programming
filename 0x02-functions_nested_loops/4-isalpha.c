#include "main.h"
/**
 * _isalpha - function
 * @l: description
 * Return: 0
 * /
 */
int _isalpha(int l)
{
	if (l >= 65 && l <= 122)
	{
		return (1);
	}
	else if (l >= 97 && l <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

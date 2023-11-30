#include "main.h"
/**
* _isdigit - checks for a digit
* @c: Argument
* Return: 0 Always
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
* _isalpha - checkers for alphabetical characters
*Return: (0) failure (1) success
* @c: parameter definition
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if	(c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

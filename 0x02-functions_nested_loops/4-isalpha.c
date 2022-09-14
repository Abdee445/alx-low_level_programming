#include "main.h"
/**
 * _isalpha - a fuction used in checking for alphabets
 *
 * @c: variable to be checked
 *
 * Return: 1 if character is an alphabet and 0 if character is not
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

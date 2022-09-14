#include "main.h"
/**
 * _islower - a fuction used in checking for lower case characters
 *
 * @c: variable to be checked
 *
 * Return: 1 if character is lowercase and 0 if character is not
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}

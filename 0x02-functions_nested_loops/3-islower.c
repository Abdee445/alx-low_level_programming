#include "main.h"
/**
 * _islower(int c) - a fuction used in checking for lower case characters
 *
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
		return (1);
	else
		return (0);
}

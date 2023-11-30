#include "main.h"
#include <unistd.h>

/**
 * _putchar - main
 * @c: char
 *
 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

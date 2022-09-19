#include "main.h"
/**
 * _puts - function to print str
 * @str: string to be inputed
 * return: void in this case
 */
void _puts(char *str)
{
	int i = 0;

	while (i >= 0)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
		i++;
	}
}    

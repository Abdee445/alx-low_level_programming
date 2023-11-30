#include <stdio.h>
/**
* main - entry block
* @void: no argument
* Return: 0
*/
int main(void)
{
	long int x;
	long int val = 612852475143;

	for (x = 2; x <= val; x++)
	{
		if (val % x == 0)
		{
			val = val / x;
			x--;
		}
	}
	printf("%lu\n", x);
	return (0);
}

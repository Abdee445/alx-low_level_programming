#include "main.h"
/**
 *main - this is the main code
 *Return: return 0
 */
int main(void)
{
	char x[] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(x[i]);
	}
	_putchar('\n');
	return (0);
}

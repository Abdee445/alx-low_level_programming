#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints to 98
 * @n: Start number
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n < 98)
			{
				printf(", ");
			}
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n > 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("98");
	}
	printf("\n");
}

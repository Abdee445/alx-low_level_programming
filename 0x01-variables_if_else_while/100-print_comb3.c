#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	int j = 0;
	for (i < 9 | j < 9; i++, j++;){
		printf("%d%d", i, j);
	}
	return(0);
}

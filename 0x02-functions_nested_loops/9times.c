#include <stdio.h>

int main ()
{
	int i, j, k;

	for ( i = 0; i <= 9; i++ )
	{
		for (j = 0; j <= 9; j++)
		{
			k = i * j;
			printf( "%d ", k);
		}
		printf("\n");
	}
	return(0);
}

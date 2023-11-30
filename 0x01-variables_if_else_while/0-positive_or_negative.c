#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - definses the main purpose of the code
 * Return: gives a response
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
		printf("%d is negative\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is zero\n", n);
	/* your code goes there */
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: counts the nno of arguments
 * @argv: saves arguments as strings in an array
 * Return: Alwys 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", i);
	return (0);
}

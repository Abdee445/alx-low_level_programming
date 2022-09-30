#include <stdio.h>
/**
 * main - entry point
 * @argc: counts no of arguments
 * @argv: stores arguments in an array
 * Return: always 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

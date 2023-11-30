#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * is_digit - main
 * @s: var 1
 * Return: (0)
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _strlen - main
 * @s: var 1
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
/**
 * errors - main
 */
void errors(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - main
 * @argc: var 1
 * @argv: var 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int var1, var2, var, i, carry, dig1, dig2, *res, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	var1 = _strlen(s1);
	var2 = _strlen(s2);
	var = var1 + var2 + 1;
	res = malloc(sizeof(int) * var);
	if (!res)
		return (1);
	for (i = 0; i <= var1 + var2; i++)
		res[i] = 0;
	for (var1 = var1 - 1; var1 >= 0; var1--)
	{
		dig1 = s1[var1] - '0';
		carry = 0;
		for (var2 = _strlen(s2) - 1; var2 >= 0; var2--)
		{
			dig2 = s2[var2] - '0';
			carry += res[var1 + var2 + 1] + (dig1 * dig2);
			res[var1 + var2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			res[var1 + var2 + 1] += carry;
	}
	for (i = 0; i < var - 1; i++)
	{
		if (res[i])
			a = 1;
		if (a)
			_putchar(res[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(res);
	return (0);
}

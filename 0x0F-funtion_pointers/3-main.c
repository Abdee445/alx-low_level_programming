#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 * main - get_op_func has operators correlated with
 * func signs and funcs from op_func
 * run calc, input one, operator, input two = pointer res to get_op
 * @argc: arguments
 * @argv: double pointer to arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
int digit1, digit2, ans;
int (*res)(int, int);
char *operator;
if (argc != 4)
{
printf("Error\n");
exit(98);
}
digit1 = atoi(argv[1]);
digit2 = atoi(argv[3]);
operator = argv[2];
if (get_op_func(argv[2]) == NULL || argv[2][1] != '\0')
{
printf("Error\n");
exit(99);
}
if ((*operator == '/' || *operator == '%') && (*argv[3] == '0'))
{
printf("Error\n");
exit(100);
}
res = get_op_func(operator);
ans = res(digit1, digit2);
printf("%d\n", ans);
return (0);
}

#include <stdio.h>

/**
 * main - Prints the sum of even-valued Fibonacci sequence
 *        terms not exceeding 4000000.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, sum;
float sum2;
while (1)
{
sum = fib1 + fib2;
if (sum > 4000000)
break;
if ((sum % 2) == 0)
sum2 += sum;
fib1 = fib2;
fib2 = sum;
}
printf("%.0f\n", sum2);
return (0);
}

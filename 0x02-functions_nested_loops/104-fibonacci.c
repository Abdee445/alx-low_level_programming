#include <stdio.h>
/**
 * main - Prints the first 98 Fibonacci numbers, starting with
 *        1 and 2, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
unsigned long fib1 = 0, fib2 = 1, sum;
unsigned long num1, num2, num3, num4;
unsigned long result1, result2;
int count;
for (count = 0; count < 92; count++)
{
sum = fib1 + fib2;
printf("%lu, ", sum);
fib1 = fib2;
fib2 = sum;
}
num1 = fib1 / 10000000000;
num3 = fib2 / 10000000000;
num2 = fib1 % 10000000000;
num4 = fib2 % 10000000000;
for (count = 93; count < 99; count++)
{
result1 = num1 + num3;
result2 = num2 + num4;
if (num2 + num4 > 9999999999)
{
result1 += 1;
result2 %= 10000000000;
}
printf("%lu%lu", result1, result2);
if (count != 98)
printf(", ");
num1 = num3;
num2 = num4;
num3 = result1;
num4 = result2;
}
printf("\n");
return (0);
}

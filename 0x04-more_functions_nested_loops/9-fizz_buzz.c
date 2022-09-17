#include <stdio.h>
/**
 * main - Prints the numbers from 1-100, but for multiples of three,
 *        Fizz is printed instead of the number, for multiples of five,
 *        Buzz, and for multiples of both three and five, FizzBuzz.
 *
 * Return: Always 0.
 */
int main(void)
{
int digit;
int value = 100;
for (digit = 1; digit <= value; digit++)
{
if ((digit % 3) == 0 && (digit % 5) == 0)
printf("FizzBuzz");
else if (digit % 3 == 0)
printf("Fizz");
else if (digit % 5 == 0)
printf("Buzz");
else
printf("%d", digit);
if (digit == value)
continue;
printf(" ");
}
printf("\n");
return (0);
}

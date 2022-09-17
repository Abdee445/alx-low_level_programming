#include "main.h"
/**
 * more_numbers - a function that prints 10 times the numbers, from 0 to 14
 * _putchar only 3 times
 * Return: numbers 0-14 ten times followed by new line
 */
void more_numbers(void)
{
int digit, count;
for (count = 0; count < 10; count++)
{
for (digit = 0; digit <= 14; digit++)
{
if (digit >= 10)
{
_putchar((digit / 10) + '0');
}
_putchar((digit % 10) + '0');
}
_putchar('\n');
}
}

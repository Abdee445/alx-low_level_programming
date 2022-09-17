#include "main.h"
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9
 *
 * Return: numbers from 0-9, excluding 2 and 4, followed by new line
 */
void print_most_numbers(void)
{
int digit;
for (digit = 0; digit <= 9; digit++)
{
if (digit != 2 && digit != 4)
_putchar(digit + '0');
}
_putchar('\n');
}

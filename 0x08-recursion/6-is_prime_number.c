#include "main.h"

/**
 * prime_checker- Checks if a number is a prime.
 * @n: The number to be checked.
 * @i: An integer.
 *
 * Return: If the number is divisible - 0.
 *         If the number is not divisible - 1.
 */

int prime_checker(int n, int i)
{
if (i == n / 2)
{
return (1);
}
else if (n % i == 0)
{
return (0);
}
else
{
return (prime_checker(n, i + 1));
}
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: If the integer is not prime - 0.
 *         If the number is prime - 1.
 */

int is_prime_number(int n)
{
int i = 2;
if (n <= 1)
{
return (0);
}
else if (n >= 2 && n <= 3)
{
return (1);
}
else
{
return (prime_checker(n, i));
}
}

#include "main.h"
/**
 * find_sqrt - Finds the natural square root of an inputted number.
 * @digit: The number to find the square root of.
 * @rt: The root to be tested.
 *
 * Return: If the number has a natural square root - the square root.
 *         If the number does not have a natural square root - -1.
 */
int find_sqrt(int digit, int rt)
{
if (rt == digit / 2)
{
return (-1);
}
else if ((rt * rt) == digit)
{
return (rt);
}
else
{
return (find_sqrt(digit, rt + 1));
}
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 *
 * Return: If n has a natural square root - the natural square root of n.
 *         If n does not have a natural square root - -1.
 */
int _sqrt_recursion(int n)
{
int rt = 0;
if (n < 0)
{
return (-1);
}
else if (n == 1)
{
return (1);
}
else
{
return (find_sqrt(n, rt));
}
}

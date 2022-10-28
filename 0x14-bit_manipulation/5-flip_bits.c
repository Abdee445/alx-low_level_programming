#include "main.h"
/**
 * flip_bits - a function that returns the number of bits
 *	you would need to flip to get from one number to another.
 * @n: input
 * @m: bits
 * Return: a digit
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0, i;
for (i = 0; n != 0 || m != 0; i++)
{
if ((n & 1) != (m & 1))
{
count++;
}
m = m >> 1;
n = n >> 1;
}
return (count);
}

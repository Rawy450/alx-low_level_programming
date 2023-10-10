#include <stdio.h>
#include "main.h"
/**
 * flip_bits - Returns the number of bits needed to fli
 * from one number to another.
 * @n: First number.
 * @m: Second number.
 * Return: Number of bits to flip.
 */
unsigned int flip_bits(unsigned int n, unsigned int m)
{
	unsigned int a = n ^ m;
	unsigned int f = 0;

	while (a > 0)
	{
		f += a & 1;
		a >>= 1;
	}

	return (f);
}

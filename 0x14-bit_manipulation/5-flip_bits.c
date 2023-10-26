#include "main.h"

/**
 * flip_bits - Count the number of bits that need to be flipped
 * to get from one number to another.
 * @n: First number.
 * @m: Second number.
 *
 * Return: Number of bits that need to be be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit, count = 0;
	unsigned long int difference = n ^ m;

	for (bit = 0; bit < (sizeof(unsigned long int) * 8); bit++)
	{
		if ((difference >> bit) & 1)
			count++;
	}

	return (count);
}

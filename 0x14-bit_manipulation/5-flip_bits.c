include "main.h"

/**
 * flip_bits - Count the number of bits that need to be flipped
 * to transform one number into another.
 * @n: The first number.
 * @m: The second number.
 *
 * Return: The number of bits that need to be flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bit;
	int count = 0;
	/* XOR to find the differing bits. */
	unsigned long int difference = n ^ m;
	
	/* Iterate through each bit of the difference. */
	for (bit = 0; bit < (sizeof(unsigned long int) * 8); bit++)
{
	/* Check if the current bit in the difference is set (1). */
	if ((difference >> bit) & 1)
        {
            count++;
        }
    }

    return count;
}

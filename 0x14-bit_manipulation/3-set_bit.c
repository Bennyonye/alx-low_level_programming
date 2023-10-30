#include "main.h"

/**
 * set_bit - Set the value of a bit to 1 at a given index.
 * @n: Pointer to the number to set.
 * @index: Index at which to set the bit.
 *
 * Return: 1 if successful, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int setbit;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	setbit = 1UL << index;
	*n = *n | setbit;

	return (1);
}

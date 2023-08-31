#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string containing the binary number
 *
 * Return: the converted number, or 0 if
 * there's one or more chars in the string b that's not 0 or 1 or
 * b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int dec_val = 0;

	/* Check for NULL string */
	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		/* Check for any character that's not '0' or '1' */
		if (b[i] < '0' || b[i] > '1')
			return (0);

		/* Shift the current decimal value left (equivalent to multiplying by 2) */
		/* and add the current binary digit. */
		dec_val = 2 * dec_val + (b[i] - '0');
	}

	return (dec_val);
}

#include "main.h"

/**
 * get_endianness - Check the endianness of the system.
 *
 * Return: 0 if the system is big endian, 1 if it's little endian.
 */
int get_endianness(void)
{
	int test = 1;
    /* Interpret the integer as a sequence of bytes. */
	char *byte = (char *)&test;
	/* Check the value of the least significant byte (first byte). If it's 1, the system is little endian. If it's 0, the system is big endian. */
	return (byte[0]);
}
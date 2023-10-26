#include "main.h"

/**
 * _pow - Calculate base raised to the power.
 * @base: Base of the exponent.
 * @power: Power of the exponent.
 *
 * Return: Value of (base ^ power).
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int result = 1;
	unsigned int i;

	for (i = 0; i < power; i++)
		result *= base;

	return (result);
}

/**
 * print_binary - Print a number in binary notation.
 * @n: Number to print in binary.
 *
 * Return: void.
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor = 1;
	int flag = 0;

	divisor <<= sizeof(unsigned long int) * 8 - 1;

	while (divisor > 0)
	{
		if (n & divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}

	if (flag == 0)
		_putchar('0');
}

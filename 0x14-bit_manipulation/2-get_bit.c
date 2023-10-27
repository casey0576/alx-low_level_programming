#include"main.h"

/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number of bits to be checked
 * @index: index at which to check bit
 * Return: value of the bit and index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, ch;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	ch = n & divisor;
	if (ch == divisor)
		return (1);
	return (0);
}

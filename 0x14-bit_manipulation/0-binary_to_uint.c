#include <stdio.h>

/**
 * binary_to_unit - function to convert a binary string to an unsigned int
 * @b: pointer to a string containing a binary number
 * Return: the unsigned int with the decimal number value
*/

unsigned int binary_to_unit(const char *b)
{
    int c;
    unsigned int number;

    number = 0;
    if (!b)
    return (0);
    for (c = 0; b[c] != '\0'; c++)
    {
        if (b[c] != '0' && b[c] != '1')
        return (0);
    }
    for (c = 0; b[c] != '\0'; c++)
    {
        number <<= 1;
        if (b[c] == '1')
        number += 1;
    }
    return(number);
}
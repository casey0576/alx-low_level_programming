#include "main.h"
/**
 *_memcpy - a function that copies memory area
 *@dest: memory where is stored
 *@src: memory area
 *@n: number of bytes
 *Return: back to desk
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int t = 0;
	int i = n;

	for (; t < i; t++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - Concatenates n bytes of one string to another
 * @s1: string to append to
 * @s2: String to concatenate from.
 * * @n: Number of bytes from s2 to concatenate to s1.
 * Return: pointer back to string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *t;
	unsigned int i = 0, k = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	if (n < len2)
		t = malloc(sizeof(char) * (len1 + n + 1));
	else
		t = malloc(sizeof(char) * (len1 + len2 + 1));

	if (!t)
		return (NULL);

	while (i < len1)
	{
		t[i] = s1[i];
		i++;
	}

	while (n < len2 && i < (len1 + n))
		t[i++] = s2[k++];

	while (n >= len2 && i < (len1 + len2))
		t[i++] = s2[k++];

	t[i] = '\0';

	return (t);
}

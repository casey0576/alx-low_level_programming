#include <stdlib.h>
#include "main.h"

/**
 * str_concat - comcatenates two input strings
 * @s1: input frist string
 * @s2: input second string
 * Return: back to (s1 and s2)
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int j, ci;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	j = ci = 0;
	while (s1[j] != '\0')
		j++;
	while (s2[ci] != '\0')
		ci++;
	conct = malloc(sizeof(char) * (j + ci + 1));

	if (conct == NULL)
		return (NULL);
	j = ci = 0;
	while (s1[j] != '\0')
	{
		conct[j] = s1[j];
		j++;
	}

	while (s2[ci] != '\0')
	{
		conct[j] = s2[ci];
		j++, ci++;
	}
	conct[j] = '\0';
	return (conct);
}

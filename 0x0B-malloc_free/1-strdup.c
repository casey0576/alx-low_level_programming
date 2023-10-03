#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicates a string to new memory space
 * @str: input string
 * Return: NULL
 */
char *_strdup(char *str)
{
	int i = 0, l = 0;
	char *a;

	if (str == NULL)
		return (NULL);

	/*calculate size of str*/
	while (str[l] != '\0')
		l++;

	a = malloc((l + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		a[i] = str[i];
		i++;
	}

	return (a);
}

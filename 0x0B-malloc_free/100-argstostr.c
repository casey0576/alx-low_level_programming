#include <stdlib.h>
#include "main.h"

/**
 * argstostr - main entry
 * @ac: Number of arguments.
 * @av: Array of argument strings
 * Return: Always 0
 */
char *argstostr(int ac, char **av)
{
	int i, j, t = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (j = 0; av[i][j]; j++)
	{
		str[t] = av[i][j];
		t++;
	}
	if (str[t] == '\0')
	{
		str[t++] = '\n';
	}
	}
	return (str);
}

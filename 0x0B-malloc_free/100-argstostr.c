#include "main.h"

/**
 * argstostr - concatenates arguments of a function
 * @ac: arguments count
 * @av: arguments vector
 * Return: pointer to concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, j, k = 0;
	int count = 0;
	char *concat;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			count++;
		count++;
	}
	concat = malloc(sizeof(char) * count * 1);
	if (concat == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[k] = av[i][j];
			k++;
		}
	concat[k++] = '\n';
	}
	concat[k] = '\0';
	return (concat);
}	

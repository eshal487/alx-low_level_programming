#include "main.h"

/**
 * _strdup : copies string to newely allocated memory space
 * @str: string to copy to new memory
 * @Return: pointer to new memory
 */

char *_strdup(char *str)
{
	char *copy;
	int count = 0;
	int i;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		count++;
	copy = malloc(sizeof(char) * count + 1);
	
	if (copy == NULL)
		return (NULL);
	for ( i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];
	return (copy);
}



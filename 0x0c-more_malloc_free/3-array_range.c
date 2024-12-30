#include "main.h"

/**
 * array_range - create array of integers
 * @main: minimum number in array
 * @max: maximum number in array
 * Return: new allocated memory
 */

int *array_range(int min, int max)
{
	int size;
	int *output;
	int i;

	if (min > max)
		return(NULL);
	size = (max - min) + 1;
	output = malloc(sizeof(int) * size);
		if (output == NULL)
			return (NULL);
	for (i = 0; min <= max; i++)
		output[i] = min++;
	return (output);
}

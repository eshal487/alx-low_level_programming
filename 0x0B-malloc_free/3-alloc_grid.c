#include "main.h"

/**
 * alloc_grid - 2d array
 * @width: number of coloumns
 * @height: number of rows
 * Return: pointer to array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **output;

	if (width <= 0 || height <= 0)
		return (NULL);

	output = calloc(height, sizeof(int *));

	if (output == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		output[i] = calloc(width, sizeof(int));
		
		if (output[i] == NULL)
		{
			free(output);
		}
	}
	return (output);
}


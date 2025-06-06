#include "function_pointers.h"

/**
 * int_index - searches for an intiger
 * @array: array to searchfrom
 * @size: size of array
 * @cmp: function pointers
 * Return: the index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
			return (-1);
}



#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to the new array, or NULL on failure
 */
int *array_range(int min, int max)
{
	int *array;
	size_t size, i;
	long range;

	if (min > max)
		return (NULL);

	range = (long)max - (long)min + 1;
	size = (size_t)range;

	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = (int)((long)min + (long)i);

	return (array);
}

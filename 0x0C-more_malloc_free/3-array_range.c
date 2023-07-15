#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of integers
 * @size: Size of the array to create
 * @value: Value to initialize each element of the array with
 *
 * Return: Pointer to the newly created array, or NULL if size is 0 or if
 *         memory allocation fails
 */

int *array_range(int min, int max)
{
	int idx, *arrRng;

	/* Check if min is greater than max */
	if (min > max)
		return (NULL);

	/* Allocate memory for the array representing the range */
	arrRng = malloc((max - min + 1) * sizeof(int));
	if (arrRng == NULL)
		return (NULL);

	/* Populate the array with consecutive values within the range */
	for (idx = 0; min <= max; idx++)
	{
		arrRng[idx] = min;
		min++;
	}

	return (arrRng);
}

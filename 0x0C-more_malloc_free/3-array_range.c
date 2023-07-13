#include <stdlib.h>
#include "main.h"

/**
 * *array_range - create an integer array within a specified range
 * @min:  The minimum value of the range.
 * @max: the maximum value of the range and number of elements in the array
 *
 * Return: Pointer to the new array, or NULL if allocation fails
 */
int *array_range(int min, int max)
{
	int *ptr;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; min <= max; i++)
		ptr[i] = min++;

	return (ptr);
}

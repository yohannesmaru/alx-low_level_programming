#include "function_pointers.h"
/**
 * int_index - returns the index of the first element in an array
 * @array: array of integers.
 * @size: number of elements in the array.
 * @cmp: pointer to a comparison function.
 * Return: index of the first matching element, or -1 if not found.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}

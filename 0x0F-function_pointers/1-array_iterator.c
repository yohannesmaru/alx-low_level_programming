#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - iterates over each element in an array
 * @array: array of integers
 * @size: number of elements in the array
 * @action: pointer to a function that performs an action on each element
 * Return: No Return Type
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

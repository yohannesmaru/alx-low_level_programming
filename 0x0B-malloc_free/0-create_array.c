#include "main.h"
#include <stdlib.h>

/**
 * create_array - Function to generate an array of given size and fill it
 * with specified character.
 * @size: size of the array
 * @c: The character to be assigned to each element of the array
 * Return: Pointer to the created array, or NULL if allocation fails or size
 * is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	str[i] = c;

	return (str);
}

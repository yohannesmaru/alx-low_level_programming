#include <stdlib.h>
#include "main.h"

/**
 * _memset - A function that fills a memory area with a constant byte.
 * @s: The memory area to be filled.
 * @b: The char value to copy.
 * @n: The number of times to copy b.
 *
 * Return: Pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

/**
 *_calloc - A function that allocates memory for an array.
 * @nmemb: The number of elements in the array.
 * @size: The size of each element.
 *
 * Return:  Pointer to the allocated memory, or NULL if allocation fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb * size);

	return (ptr);
}

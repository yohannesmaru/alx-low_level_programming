#include "main.h"

/**
 * _strncpy - Copies a string with a maximum of n characters
 * @dest: The destination string where the source string will be copied
 * @src: The source string to be copied to the destination string
 * @n: The maximum number of characters to be copied from src
 *
 * Return: A pointer to the destination string 'dest' after copying.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

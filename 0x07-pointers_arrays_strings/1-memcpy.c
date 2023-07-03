#include "main.h"
/**
* _memcpy - Updates a memory area by copying data from another memory area
* @dest: Destination memory where the data is copied to
* @src: Source memory where the data is copied from
* @n: Number of bytes to be copied
* Return: Pointer to the destination memory with the copied data (n bytes)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}

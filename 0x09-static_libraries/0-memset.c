#include "main.h"
/**
* _memset - Updates a block of memory by filling it with a specific value
* @s: Starting address of the memory block to be updated
* @b: The desired value to fill the memory block with
* @n: Number of bytes in the memory block to be updated
* Return: Pointer to the updated memory block with the new value for n bytes
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

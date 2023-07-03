#include "main.h"
/**
* _strpbrk - Searches a string for any of a set of characters
* @s: Input string to search within
* @accept: String containing the characters to search for
* Return: Pointer to any character from 'accept' in 's',
* or NULL if no such character is found.
*/
char *_strpbrk(char *s, char *accept)
{
		int k;

		while (*s)
		{
			for (k = 0; accept[k]; k++)
			{
			if (*s == accept[k])
			return (s);
			}
		s++;
		}

	return ('\0');
}

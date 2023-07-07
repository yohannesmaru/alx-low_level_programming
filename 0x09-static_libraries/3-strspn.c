#include "main.h"
/**
* _strspn - Calculates the length of the initial segment of a string
* consisting of only characters from a given set
* @s: Input string to be checked
* @accept: String containing the allowed characters
* Return: The length of 's' that contains only characters
* present in 'accept'
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

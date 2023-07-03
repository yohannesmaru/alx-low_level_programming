#include "main.h"
/**
* _strchr - Locates the first occurrence of a character in a string
* @s: Input string to search within
* @c: Character to locate
* Return: Pointer to the first occurrence of the character in the string,
* or NULL if the character is not found
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}

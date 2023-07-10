#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate a string to a new memory space location
 * @str: input string to be duplicated
 * Return: pointer to the duplicated string, or NULL if allocation fails
 */
char *_strdup(char *str)
{
	if (str == NULL)
	return (NULL);

	int length = 0;

	while (str[length] != '\0')
	length++;

	char *duplicate = malloc(sizeof(char) * (length + 1));

	if (duplicate == NULL)
	return (NULL);

	for (int i = 0; i <= length; i++)
	duplicate[i] = str[i];

	return (duplicate);
}

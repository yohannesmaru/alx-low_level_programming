#include <stdlib.h>
#include "main.h"

/**
* count_word - Count the number of words in a string.
* @s: Input string.
* Return: The number of words in the string.
*/
int count_word(char *s)
{
int flag = 0, w = 0;

for (int c = 0; s[c] != '\0'; c++)
{
if (s[c] == ' ')
flag = 0;
else if (flag == 0)
{
flag = 1;
w++;
}
}

return (w);
}
/**
* strtow - Split a string into an array of words.
* @str: Input string to be split.
* Return: A pointer to the array of strings, or NULL if allocation fails or
* the input string is empty.
*/
char **strtow(char *str)
{
if (str == NULL || *str == '\0')
return (NULL);

int len = 0;
while (str[len] != '\0')
len++;

int words = count_word(str);
if (words == 0)
return (NULL);
char **matrix = malloc(sizeof(char *) * (words + 1));
if (matrix == NULL)
return (NULL);
int start = 0, k = 0, c = 0;
for (int i = 0; str[i] != '\0'; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
int end = i - 1;
char *tmp = malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
int j = 0;
while (start <= end)
tmp[j++] = str[start++];
tmp[j] = '\0';
matrix[k++] = tmp - c;
c = 0;
}
}
else if (c++ == 0)
{
start = i;
}
}
matrix[k] = NULL;
return (matrix);
}

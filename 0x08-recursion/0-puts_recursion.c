#include "main.h"
/**
*_puts_recursion - A recursive function similar to the puts() function.
*@s: The input string.
*Return: None.
*/
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}

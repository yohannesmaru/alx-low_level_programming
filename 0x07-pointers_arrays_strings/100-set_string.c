#include "main.h"
/**
* set_string - Updates the value of a pointer to a char with a new address
* @s: Pointer to a pointer to be updated
* @to: Address of the new char value
* Return: void
*/
void set_string(char **s, char *to)
{
	*s = to;
}

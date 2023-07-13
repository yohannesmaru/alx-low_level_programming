#include "main.h"
#include <unistd.h>
/**
* _putchar - This function writes a single character to the standard output.
* @c: The character to be printed.
* Return: On success, the function returns 1.
* On error, the function returns -1 and sets the appropriate errno.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

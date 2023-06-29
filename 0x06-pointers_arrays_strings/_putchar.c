#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a character to the standard output
 * @c: The character to be written
 *
 * It returns 1 on success and -1 on error, setting the appropriate error code.
 *
 * Return: On success, returns 1.
 * On error, returns -1 and sets the appropriate error code.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

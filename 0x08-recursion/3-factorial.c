#include "main.h"

/**
*factorial - calculates the factorial of a given number
*@n: the number for which factorial is to be calculated
*Return: the factorial value of n
*/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

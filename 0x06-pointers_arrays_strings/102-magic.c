#include <stdio.h>

/**
*main - Entry point of the program
*
*Return: Always 0 (indicating successful execution of the program)
*/
int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	*p = 98; // Added line of code
	printf("a[2] = %d\n", a[2]);
	return (0);
}

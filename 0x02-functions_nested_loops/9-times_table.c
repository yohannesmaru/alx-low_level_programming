#include "main.h"
#include <stdio.h>

/**
 * times_table - Print the 9 times table starting with 0.
 */
void times_table(void)
{
	int row, column, result;

	for (row = 0; row <= 9; row++)
	{
	for (column = 0; column <= 9; column++)
	{
	result = row * column;
	if (result > 9)
	{
	printf("%d, ", result);
	}
	else if (column == 0)
	{
	printf("%d", result);
	}
	else
	{
	printf(" %d", result);
	}
	}
	printf("\n");
	}
}

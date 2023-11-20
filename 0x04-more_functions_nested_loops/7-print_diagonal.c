#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 * @n: number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	if (n <= 0)
	{
		my_putcha('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == i)
				my_putcha('\\');
			else if (j < i)
				my_putcha(' ');
		}
		my_putcha('\n');
	}
	}
}

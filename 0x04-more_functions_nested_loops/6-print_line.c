#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	if (n <= 0)
	{
		my_putcha('\n');
	}
	else
	{
	int i;

	for (i = 1; i <= n; i++)
	{
		my_putcha('_');
	}
		my_putcha('\n');
	}

}

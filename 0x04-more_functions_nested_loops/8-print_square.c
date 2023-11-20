#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */
void print_square(int size)
{
	if (size <= 0)
	{
	my_putcha('\n');
	}
	else
	{
	int i, j;

	for (i = 0; i < size; i++)
	{
	for (j = 0; j < size; j++)
	{
	my_putcha('#');
	}
	my_putcha('\n');
	}
	}
}

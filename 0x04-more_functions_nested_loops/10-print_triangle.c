#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
	my_putcha('\n');
	}
	else
	{
	int i, j;

	for (i = 1; i <= size; i++)
	{
	for (j = i; j < size; j++)
	{
	my_putcha(' ');
	}

	for (j = 1; j <= i; j++)
	{
	my_putcha('#');
	}

	my_putcha('\n');
	}
	}
}

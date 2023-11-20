#include "main.h"

/**
  * _puts_recursion - main function
  *
  * @s: function parameter
  *
  * Return: Always 0.
  */
void _puts_recursion(char *s)
{
	if (*s)
	{
		my_putcha(*s);
		_puts_recursion(s + 1);
	}
	else
	my_putcha('\n');
}


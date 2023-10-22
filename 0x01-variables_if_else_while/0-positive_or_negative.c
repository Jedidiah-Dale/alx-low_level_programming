#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * main - Entry point
 * Description: Generates a random number and checks if it's positive, negative, or zero.
 *
 * Return: 0 (Success)
 */
 
int main(void)
{
	int n;
	/*Seed the random number generator with the current time */
	srand(time(0));
	
	/* Generate a random number between -RAND_MAX/2 and RAND_MAX/2 */
	n = rand() - RAND_MAX / 2;
	
	printf("The number is %d\n", n);
	
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n == 0)
	{
		printf("is zero\n");
	}
	else
	{
		printf("is negative\n");
	}
       
	printf("\n");
	return (0);
}

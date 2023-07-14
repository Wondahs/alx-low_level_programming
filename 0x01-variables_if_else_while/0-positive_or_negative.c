#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point.
* Return: Returns 0.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* If statement to determine positive and negative */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}

#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	long int number = 612852475143;
	int largest_prime = 2;
	int i;

	for (i = 3; (i * i) <= number; i += 2)
	{
		while (number % i == 0)
		{
			largest_prime = i;
			number /= i;
		}
	}

	printf("The largest prime factor is %d\n", largest_prime);
	return (0);
}

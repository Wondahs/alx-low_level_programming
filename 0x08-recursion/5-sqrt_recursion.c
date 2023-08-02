#include "main.h"
/**
 *_sqrt_recursion - Square root calculator
 *@n: Number
 *Return: Square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (sqrt_calc(n, 0));
}

/**
 *sqrt_calc - Helper function to calculate square root of number
 *@n: Number
 *@i: starting point
 *Return: square root
 */
int sqrt_calc(int n, int i)
{
	if ((i * i) > n)
		return (-1);
	else if ((i * i) == n)
		return (i);
	else
		return (sqrt_calc(n, i + 1));
}

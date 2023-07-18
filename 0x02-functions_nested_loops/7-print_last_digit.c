#include "main.h"
/**
 *print_last_digit - prints last digit of a given integer
 *@i: input integer
 *Return: Returns last digit
 */
int print_last_digit(int i)
{
	int lastDigit = i % 10;

	if (lastDigit < 0)
	{
		lastDigit *= -1;
	}
	_putchar('0' + lastDigit);
	return (lastDigit);
}

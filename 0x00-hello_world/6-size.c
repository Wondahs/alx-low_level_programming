#include <stdio.h>
#include <stdint.h>
/**
 * main - This is the main program.
 * Return: Returns 0 if successful
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", sizeof(char));
	printf("Size of an int: %lu byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(int64_t));
	printf("Size of a float: %lu byte(s)\n", sizeof(float));
	return (0);
}

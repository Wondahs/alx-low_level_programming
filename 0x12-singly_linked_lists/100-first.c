#include <stdio.h>

void firstPrint(void) __attribute__ ((constructor));

/**
 * firstPrint - prints a sentence before the main
 * function is executed
 */
void firstPrint(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}


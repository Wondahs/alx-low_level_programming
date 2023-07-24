#include "main.h"

/**
 *swap_int - swap a for b
 *@a: first input
 *@b: second input
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;

}

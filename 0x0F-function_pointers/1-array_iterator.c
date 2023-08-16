#include "function_pointers.h"

/**
 *array_iterator - Executes a function given as a parameter
 *on each element of an array.
 *@array: Input array
 *@action: Function to execute
 *@size: Size of array
 *
 *Retun: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i;

	for (i = 0; i < size; i++)
		action(array[i]);
}

#include "function_pointers.h"

/**
 *print_name - A function that prints a name
 *@name: Name to print
 *@f: Fuction pointer to name printer
 *
 *Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

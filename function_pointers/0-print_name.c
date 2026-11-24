
#include "function_pointers.h"

/**
 * print_name - prints a name using a function
 * @name: name to print
 * @f: pointer to the function that prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}


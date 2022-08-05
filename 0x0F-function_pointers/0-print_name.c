#include "function_pointers.h"

/**
 * print_name - print the name.
 * @name: the name to be printed.
 * @f: A pointer to the function whose name was printed.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

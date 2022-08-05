#include <stdio>
#include "function_pointers.h"

/**
 * array_iterator - print the integer.
 * @array: the array to print
 * @size: the size of our array.
 * @action: a pointer to the function
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
	{
		if (array == NULL || action == NULL)
			return;
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}

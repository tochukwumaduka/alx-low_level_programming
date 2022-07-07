#include "main.h"
/**
 * _islower - is the method
 * test if the letter is lower case
 *Return: 1 if it is a lowercase letter, 0 if it is not a lowercase letter.
* @c: test the c character
*/

int _islower(int c)
	{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

	}

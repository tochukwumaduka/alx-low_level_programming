#include "main.h"


/**
 * _isalpha - method to check whether a character is from the English alphabet.
 * @c: character on check.
 * Return: 1 if the character is an English character.
 * 0 if the character is not an English character.
 */
	int _isalpha(int c)
	{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);

	}

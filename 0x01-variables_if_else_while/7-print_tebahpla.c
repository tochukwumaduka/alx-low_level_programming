#include <stdio.h>
/**
* main - prints the alphabet in reverse.
*
* Return: 0 on success
*/
	int main(void)
	{
	char d = 'z';

	while (d >= 'a')
	{
		putchar(d);
		d--;
	}
	putchar('\n');
	return (0);
	}

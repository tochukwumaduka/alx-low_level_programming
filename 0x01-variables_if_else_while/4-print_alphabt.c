#include <stdio.h>
/**
* main - Prints the alphabet except the letters q and e.
*
* Return: 0 on success
*/
	int main(void)
	{
	char d = 'a';

	while (d <= 'z')
	{
		if (d != 'q' && d != 'e')
		{
			putchar(d);
		}
		d++;
	}
	putchar('\n');
	return (0);
	}

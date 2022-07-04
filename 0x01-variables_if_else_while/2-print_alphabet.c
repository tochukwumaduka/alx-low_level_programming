#include <stdio.h>
/**
* main - prints the alphabet in lowercase.
*
* Return: 0 on success
*/
int main(void)
{
	char d = 'a';

	while (d <= 'z')
	{
		putchar(d);
		d++;
	}
	putchar('\n');
	return (0);
}

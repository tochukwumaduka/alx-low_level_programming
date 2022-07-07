#include "main.h"
/**
 * times_table - method thst prints the times table from 0 - 9.
 *
 * Return: Nothing.
 */
	void times_table(void)
	{
	int m, n, res;

	for (m = 0; m <= 9; m++)
	{
		for (n = 0; n <= 9; n++)
		{
			res = (m * n);
			if (n != 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (res >= 10)
			{
				_putchar((res / 10) + '0');
				_putchar((res % 10) + '0');
			}
			else if (res < 10 && j != 0)
			{
				_putchar(' ');
				_putchar((res % 10) + '0');
			}
			else
				_putchar((res % 10) + '0');
		}
		_putchar('\n');
	}
	}

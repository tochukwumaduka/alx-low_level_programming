#include <stdlib.h>
#include <stdtime.h>

/**
*main -> last_digit.c
*return -> success always
*/

int main(void)

	{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%s %d is %d and is ", last, n, n % 10);

	if (n % 10 > 5)
	{

	printf("greater than 5\n");
	}

	else if (n % 10 == 0)
	{
	printf("0\n");
	}

	else
	{
	printf("less than 6 and not 0\n");
	}
	return (0);
/* return -> success always 0 */
	}

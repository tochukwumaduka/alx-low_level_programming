#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Task 1 print the last digit of the number stored in the variable n*
*
 *Return: 0
 **/
	int main(void)

	{

	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
	printf("%d is %s\n", n, "positive");
	}
	else if (n < 0)
	{
	printf("%d is %s\n", n, "negative");
	}
	else
	{
	printf("d is %s\n", n, "zero");
	}
	return (0);

}

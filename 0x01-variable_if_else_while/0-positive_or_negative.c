#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*more headers goes here*/

/*betty style doc for main goes here*/
/**
 * main - main function
 * Return: always (0)
 */



int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
	printf("is positive")
	}
	else if (n == 0)
	{
	printf("is zero")
	}
	else if (n > 0)
	{
	printf("is negative")
	}
	return (0);
}

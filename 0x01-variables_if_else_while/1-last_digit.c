#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*betty style doc for funtion main goes there */
/**
 * main - main function
 * Return: always 0
 */




int main(void)
{
	int n;
	int b;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	b = n % 10;
	if (b > 5)
		printf("Last digit of %d is %d and is greater than 5", n, b);
	else if (b == 0)
		printf("Last digit of %d is %d and is zero", n, b);
	else if (b < 6 && b != 0)
		printf("Last digit of %d is %d and is less than 6 and o", n, b);
	printf("\n");
	return (0);
}

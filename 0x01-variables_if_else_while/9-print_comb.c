#include <stdlib.h>
#include <stdio.h>

/**
 * main - main entry point of the program
 *
 * Return: used to exist the function
 */
int main(void)
{

	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}


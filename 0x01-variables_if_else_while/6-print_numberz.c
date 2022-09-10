#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return:  A lways 0 (Success)
*/

int main(void)
{
	int number;

	for (number = '0'; number <= '9'; number++)
	{
		putchar(number);
	}
	putchar('\n');

	return (0);
}

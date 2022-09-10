#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int numb;
	char let;

	for (numb = '0'; numb <= '9'; numb++)
	{
		putchar(numb);
	}
	for (let = 'a'; let <= 'f'; let++)
	{
		putchar(let);
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
*/
void to_print_alphabet(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');
}

#include "main.h"
/**
 *  print_alphabet - Check description
 *
 * Description: It prints the alphabet in lowercase fallowed by a new line
 *
 * Return: Nothing
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
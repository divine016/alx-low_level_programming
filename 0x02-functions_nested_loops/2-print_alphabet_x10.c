#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: function uses _putchar function to print
 *alphabet in lowercase 10 times
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char letter;
	int number;

	for (number = 0; number < 10; number++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

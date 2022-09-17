#include "main.h"
/**
 * print_most_numbers - A function that prints numbers except for 2 and 4
*/
void print_most_numbers(void)
{
	int numb;

	for (numb = '0'; numb <= '9'; numb++)
	{
		if (numb != '2' && numb != '4')
			_putchar(numb);
	}
	putchar('\n');
}

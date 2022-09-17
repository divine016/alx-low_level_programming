#include "main.h"
/**
 * more_numbers - A function that print numbers from 0 to 14 10 times
*/
void more_numbers(void)
{
	int count, numb;

	for (count = 1; count <= 10; count++)
	{
		for (numb = 0; numb <= 14; numb++)
		{
			if (numb > 9)
				_putchar(numb / 10 + '0');
			_putchar(numb % 10 + '0');
		}
		_putchar('\n');
	}
}

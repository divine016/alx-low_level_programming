#include "main.h"
/**
 * print_square - A function used to print a square
 * @size: An input interger
*/
void print_square(int size)
{
	if (size > 0)
	{
		int height, width;

		for (height = 0; height < size; height++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

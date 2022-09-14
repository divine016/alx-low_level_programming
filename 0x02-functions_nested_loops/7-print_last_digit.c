#include "main.h"

/**
 * print_last_digit - Check description
 * @numb: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number numb
*/
int print_last_digit(int numb)
{
	int n;

	if (numb > 0)
		n = numb % 10;
	else
		n = -1 * (numb % 10);
	_putchar((n % 10) + '0');
	return (n % 10);
}

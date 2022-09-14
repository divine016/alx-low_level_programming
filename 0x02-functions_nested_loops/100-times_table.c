#include "main.h"
/**
 * print_times_table - prints times table for numbers from
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
	int num, prod;

	if (n >= 0 && n < 15)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');
			for (prod = 1; prod <= n; prod++)
				putformat(num * prod);
			_putchar('\n');
		}
	}
}
/**
 * putformat - formatted characters to output
 * @n: number to format
 * Return: nothing
*/
void putformat(int n)
{
	if (n <= 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(' ');
		_putchar(n + '0');
	}
	else if (n > 9 && n <= 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
	}
	else
	{
		_putchar(',');
		_putchar(' ');
		_putchar(n / 100 + '0');
		_putchar(n / 10 % 10 + '0');
		_putchar(n % 10 + '0');
	}
}

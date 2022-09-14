#include "main.h"
/**
 * jack_bauer - Check description
 * Description:A function that  prints every minute in one day
 * Return: Nothing
*/
void jack_bauer(void)
{
	int hours, mins;

	for (hours = 0; hours < 24; hours++)
	{
		for (mins = 0; mins < 60; mins++)
		{
			_putchar(hours / 10 + '0');
			_putchar(hours % 10 + '0');
			_putchar(':');
			_putchar(mins / 10 + '0');
			_putchar(mins % 10 + '0');
		}
	}
}

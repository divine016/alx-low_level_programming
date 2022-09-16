#include "main.h"

/**
 * _isupper - A function that see if a character is capital letter or not
 * Return: 1 if upper and 0 if otherwise
 * @c: character to be checked.
*/

int _isupper(int c)
{
	char upper;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (upper == c)
			return (1);
		else
			return (0);
	}
}

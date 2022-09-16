#include "main.h"

/**
 * _isupper - A function that see if a character is capital letter or not
 * Return: 1 if upper and 0 if otherwise
 * @c: character to be checked.
*/

int _isupper(int c)
{
	int isupper = 0;
	char upp;

	for (upp = 'A'; upp <= 'Z'; upp++)
	{
		if (c == upp)
		{
			isupper = 1;
			break;
		}
	}

	return (isupper);
}

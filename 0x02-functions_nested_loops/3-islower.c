#include "main.h"
/**
 * _islower - check description
 *  @c: An input character
 * Description -  check if a character is lower case or not
 * Return:  1 if is lowercase or 0 if is uppercase
*/

int _islower(int c)
{
	char letter;
	int lower = 0;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter == c)
			lower = 1;
		else
			lower = 0;
	}
	return (lower);
}

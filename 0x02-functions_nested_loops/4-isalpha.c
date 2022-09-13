#include "main.h"
/**
 * _isalpha - check description
 * @c : an input character
 * decribtion - a funtion that pribt 1 if the characte ris an uppercase or a
 * lower case and 0 otherwise.
 * Return: 1 if charater is upper or lower  case and 0 if none
*/
int _isalpha(int c)
{
	char lower, upper;
	int lowupp = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
				lowupp = 1;
		}
	}
return (lowupp);
}


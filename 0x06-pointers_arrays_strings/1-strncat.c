#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: an input string
 * @src: an input string
 * @numb: an input integer
 * Return: A pointer to the resulting string
*/

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int i;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++'
	}

	while (*dest)
		dest++;

	if (numb > srclen)
		numb = srclen;

	src = start;
	for (i = 0; i < n; i++)
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (temp)


}

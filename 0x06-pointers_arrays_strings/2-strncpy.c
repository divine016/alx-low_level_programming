#include "main.h"
/**
 * _strncpy - a function that copys the strings.
 * @dest: an input string
 * @src: an input string
 * @n: an input integer
 * Return: A pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;

	while (src[i++])
		srclen++;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}

	for (i = srclen; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}

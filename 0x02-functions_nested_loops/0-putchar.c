#include <unistd.h>

/**
 * _putchar - write the char c to stdout
 *  @c: The character to print
 *
 * Return: On Success 1
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

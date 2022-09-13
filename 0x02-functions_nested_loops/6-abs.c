#include "main.h"
/**
 *_abs - Check Holberton
 * @numb: An integre input
 * Description: This function returns absolute
 * value of a number
 * Return: Absolut value of number r
 */
int _abs(int numb)
{
	if (numb >= 0)
		return (numb);
	else
		return (numb * -1);
}

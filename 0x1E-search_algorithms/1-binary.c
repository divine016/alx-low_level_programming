#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for the position of
 * a value in a sorted array
 * @array: a pionter to first element of the array
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: Gives -1 if the value is not found
 *	or array is null else returns the
 *	index of where the value is found
 *
 * Description: Prints the array(half) being search after each change.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i, half_left, half_right;

	if (array == NULL)
	{
		return (-1);
	}

	for (half_left = 0, half_right = size - 1; half_right >= half_left;)
	{
		printf("Searching in array: ");
		for (i = half_left; i < half_right; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		i = half_left + (half_right - half_left) / 2;

		if (array[i] == value)
		{
			return (1);
		}
		if (array[i] > value)
		{
			half_right = i + 1;
		}
		else
		{
			half_left = i + 1;
		}
	}
	return (-1);
}

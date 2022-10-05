#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 *  Return: pointer to a 2D array, NULL on failure
*/
int **alloc_grid(int width, int height)
{
	int **array;
	int hgt_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		array[hgt_index] = malloc(sizeof(int) * width);

		if (array[hgt_index] == NULL)
		{
			for (; hgt_index >= 0; hgt_index--)
				free(array[hgt_index]);

			free(array);
			return (NULL);
		}
	}
	for (hgt_index = 0; hgt_index < height; hgt_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			array[hgt_index][wid_index] = 0;
	}

	return (array);
}


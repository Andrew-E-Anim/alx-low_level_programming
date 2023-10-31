#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - create 2 dimensional array of integrers
 *
 * @width: width of the array
 * @height: height of the array
 *
 * Return: pointer to 2 dimensional array of integers
 * NULL on failure
 * NULL if height or width is 0 or negative
 *
 */
int **alloc_grid(int width, int height)
{
	int **arr, x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
		if (arr == NULL)
			return (NULL);
	for (x = 0; x < height; ++x)
	{
		arr[x] = (int *)malloc(sizeof(int) * width);
		if (arr[x] == NULL)
		{
			for (y = 0; y < x; ++y)
				free(arr[y]);
			free(arr);
			return (NULL);
		}
		for (y = 0; y < width; ++y)
		{
			arr[x][y] = 0;
		}
	}
	return (arr);
}

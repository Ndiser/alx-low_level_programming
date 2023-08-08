#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim, array
 */
int **alloc_grid(int width, int height)
{
	int **ab;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	ab = malloc(sizeof(int *) * height);

	if (ab == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		ab[x] = malloc(sizeof(int) * width);

		if (ab[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ab[x]);

			free(ab);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ab[x][y] = 0;
	}
	return (ab);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height){
	if(width<=0||height<=0)
		return NULL;
	int x=0,y=0;
	int **ptr=(int*)malloc(sizeof(int*)*height);
	if(ptr==NULL)
		return NULL;
	for(x=0;x<height;x++){
		ptr[x] = malloc(sizeof(int) * width);

		if (ptr[x] == NULL)
		{
			for (; x >= 0; x--)
				free(ptr[x]);

			free(ptr);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			ptr[x][y] = 0;
	}

	return (ptr);
}


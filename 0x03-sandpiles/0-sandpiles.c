#include "sandpiles.h"

/**
 * sandpiles_sum - returns the sum of 2 sandpiles
 * @grid1: first sandpile
 * @grid2: second sandpile
 * Return: stable sum of the 2 sandpiles
 **/

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{

}


/**
 * add_sandpiles - adds together 2 sandpiles
 * @grid1: first sandpile
 * @grid2: second sandpile
 **/

void add_sandpiles(int grid1[3][3], int grid2[3][3])
{
	int x, y;

	for (x = 0; x < 3; x++)
	{
		for (y = 0; y < 3; y++)
			grid1[x][y] += grid2[x][y];
	}
}

/**
 * print_grid - prints a grid
 * @grid: sandpile to print
 **/

static void print_grid(int grid[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

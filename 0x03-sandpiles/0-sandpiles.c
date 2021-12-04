#include "sandpiles.h"

/**
 * sandpiles_sum - finds the sum of 2 sandpiles
 * @grid1: sandpile 1
 * @grid2: sandpile 2
 *
 * Return: the sum of two sandpiles(STABLE)
 */

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int count = 0;

	sandpiles_add(grid1, grid2);
	count = sandpiles_stable(grid1);
	if (count == 0)
		return;
	printf("=\n");
	print_grid(grid1);
	while (count > 0)
	{
		sandpiles_topple(grid1);
		count = sandpiles_stable(grid1);
		if (count > 0)
		{
			printf("=\n");
			print_grid(grid1);
		}
	}
}

/**
 * sandpiles_topple - topples a sandpile
 * @grid1: the sandpile that will be toppled
 *
 * Retun: void
 */

void sandpiles_topple(int grid1[3][3])
{
	int i, j, toppled[3][3];

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (grid1[i][j] > 3)
				toppled[i][j] = 1;
			else
				toppled[i][j] = 0;
		}
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (toppled[i][j] == 1)
			{
				{
					grid1[i][j] -= 4;
					if (i > 0)
						grid1[i - 1][j]++;
					if (j > 0)
						grid1[i][j - 1]++;
					if (i < 2)
						grid1[i + 1][j]++;
					if (j < 2)
						grid1[i][j + 1]++;
				}
			}
		}
	}
}

/**
 * sandpiles_add - finds the sum of 2 sandpiles
 * @grid1: sandpile 1
 * @grid2: sandpile 2
 *
 * Return: void
 */

void sandpiles_add(int grid1[3][3], int grid2[3][3])
{
	int i, j;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			grid1[i][j] += grid2[i][j];
	}
}

/**
 * sandpiles_stable - checks if a sandpile is stable
 * @grid1: the sandpile to check
 * Return: number of sandpiles to topple, if unstable
 **/

int sandpiles_stable(int grid1[3][3])
{
	int i, j, count = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
			if (grid1[i][j] > 3)
				count++;
	}
	return (count);
}

/**
 * print_grid - prints a 3x3 grid
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

#include "menger.h"

/**
 * menger - function that draws a 2D Menger Sponge
 * @level: the level of the Menger Sponge to draw
 * Return - void
 */

void menger(int level)
{
	int idx, x, y;
	int size;
	int columns;
	int rows;

	size = pow(3, level);
	for (rows = 0; rows < size; rows++)
	{
		for (columns = 0; columns < size; columns++)
		{
			y = 35; /* ASCII for # */
			idx = rows;
			x = columns;
			while (idx > 0 || x > 0)
			{
				if (idx % 3 == 1 && x % 3 == 1)
					y = 32; /* ASCII for space */
				idx /= 3;
				x /= 3;
			}
			putchar(y);
		}
		putchar('\n');
	}
}

/* Divide AND assignment operator. It divides the left operand with the right operand, */
/* and assigns the result to the left operand */
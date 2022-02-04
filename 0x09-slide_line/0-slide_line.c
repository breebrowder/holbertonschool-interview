#include <stdlib.h>
#include <stdio.h>

#include "slide_line.h"
/**
* slide_line - function that slides and merges an array of integers
* @line: array of integers
* @size: number of elements in array
* @direction: slide left or slide right macro
* 
* Return: 1 upon success 0 upon failure
*/
int slide_line(int *line, size_t size, int direction)
{
        int tmp = line[0]; /* start array index of 0 */
	unsigned int idx; /* iterator */
	int flag = 0; /* boolean value false */

	if (size < 1)
	{
	  return (flag);
	}
	
	if ((direction != SLIDE_LEFT && direction != SLIDE_RIGHT))
	{
	  return (flag);
	}

	if (line == NULL)
		return (0);

	if (direction == SLIDE_LEFT)
	{
		for (idx = 0; idx < size - 1; idx++)
			line[idx] = line[idx + 1];
	}

	if (direction == SLIDE_RIGHT)
	{
		tmp = line[size - 1];
		for (idx = size - 1; idx > 0; idx--)
			line[idx] = line[idx - 1];
		line[0] = tmp;
	}
	return (1);
}

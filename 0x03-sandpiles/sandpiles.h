#ifndef SANDPILES_H
#define SANDPILES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
void sandpiles_topple(int grid1[3][3]);
void sandpiles_add(int grid1[3][3], int grid2[3][3]);
int sandpiles_stable(int grid1[3][3]);
static void print_grid(int grid[3][3]);

#endif /* SANDPILES_H */

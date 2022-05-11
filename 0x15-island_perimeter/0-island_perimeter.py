#!/usr/bin/python3
"""
Task 0. Island Perimeter
"""


def island_perimeter(grid):
    """ Create a function that returns the perimeter of the island described in grid """
    per = 0
    for i, x in enumerate(grid):
        for y, z in enumerate(x):
            if z == 1:
                per = per + 4
                if y and x[y-1]:
                    per = per - 2
                if i and grid[i-1][y]:
                    per = per - 2
    return per

""" enumerate is a way to create own data type in C; defined by user """
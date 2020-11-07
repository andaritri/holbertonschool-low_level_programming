#!/usr/bin/python3
"""
Define function to calculate the perimeter of the island.
"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid.

    Args:
        grid (list of lists): list of list with 0's and 1's.
    """
    perimeter = 0
    for r in range(len(grid)):
        for c in range(len(grid[0])):
            if grid[r][c] == 1:
                try:
                    if not grid[r][c-1]:
                        perimeter += 1
                    if not grid[r][c+1]:
                        perimeter += 1
                    if not grid[r-1][c]:
                        perimeter += 1
                    if not grid[r+1][c]:
                        perimeter += 1
                except IndexError:
                    pass
    return perimeter

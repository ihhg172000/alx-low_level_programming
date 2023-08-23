#!/usr/bin/python3
"""
Island perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
    perimeter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                try:
                    if grid[row - 1][col] == 0:
                        perimeter += 1
                except IndexError:
                    pass
                try:
                    if grid[row + 1][col] == 0:
                        perimeter += 1
                except IndexError:
                    pass
                try:
                    if grid[row][col - 1] == 0:
                        perimeter += 1
                except IndexError:
                    pass
                try:
                    if grid[row][col + 1] == 0:
                        perimeter += 1
                except IndexError:
                    pass
    return perimeter

#!/usr/bin/python3
"""
Island perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
    perimeter = 0

    for r in range(len(grid)):
        for c in range(len(grid[r])):
            if grid[r][c] == 1:
                if r != 0:
                    if grid[r - 1][c] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if r != len(grid) - 1:
                    if grid[r + 1][c] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if c != 0:
                    if grid[r][c - 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if c != len(grid[r]) - 1:
                    if grid[r][c + 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

    return perimeter

#!/usr/bin/python3
"""
Island perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
    new_grid = list(filter(lambda r: not all(n == 0 for n in r), grid))
    for r in range (1, len(new_grid) - 1):
        for c in range(len(new_grid[r])):
            if new_grid[r][c] == 0 and 1 in new_grid[r][:c] and 1 in new_grid[r][c:]:
                new_grid[r][c] = 1
                
    perimeter = 0
                
    for r in range(len(new_grid)): #0 4
        for c in range(len(new_grid[r])): #0 6
            if new_grid[r][c] == 1:
                if r != 0:
                    if new_grid[r - 1][c] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if r != len(new_grid) - 1:
                    if new_grid[r + 1][c] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if c != 0:                    
                    if new_grid[r][c - 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if c != len(new_grid[r]) - 1:
                    if new_grid[r][c + 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1
                
    return perimeter

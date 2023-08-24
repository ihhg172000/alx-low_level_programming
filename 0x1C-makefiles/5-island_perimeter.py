#!/usr/bin/python3
"""
Island perimeter
"""


def island_perimeter(grid):
    """
    Returns the perimeter of the island described in grid.
    """
    g = list(filter(lambda r: not all(n == 0 for n in r), grid))
    for r in range(1, len(g) - 1):
        for c in range(len(g[r])):
            if g[r][c] == 0 and 1 in g[r][:c] and 1 in g[r][c:]:
                g[r][c] = 1

    perimeter = 0

    for r in range(len(g)):
        for c in range(len(g[r])):
            if g[r][c] == 1:
                if r != 0:
                    if g[r - 1][c] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if r != len(g) - 1:
                    if g[r + 1][c] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if c != 0:
                    if g[r][c - 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

                if c != len(g[r]) - 1:
                    if g[r][c + 1] == 0:
                        perimeter += 1
                else:
                    perimeter += 1

    return perimeter

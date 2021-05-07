#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """Finds perimeter of island provided as grid"""
    island_count = 0
    perimeter = 0
    sides = 4

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                island_count += 1
    perimeter = ((sides * island_count)/2) + 2
    return int(perimeter)

#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """Finds perimeter of island provided as grid"""
    gridWidth = len(grid)
    gridLength = len(grid[0])
    island_count = 0
    perimeter = 0
    sides = 4

    if gridLength <= 100 and gridWidth <= 100:
        for i in range(len(grid)):
            for j in range(len(grid[i])):
                if grid[i][j] == 1:
                    island_count += 1
        if island_count == 0:
            perimeter = 0
            return perimeter
        perimeter = ((sides * island_count)/2) + 2
        return int(perimeter)

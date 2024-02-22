#!/usr/bin/python3
"""Module to calculate the perimeter of an island in a grid"""

def island_perimeter(grid):
    """Calculates the perimeter of the island described in the grid

    Args:
        grid (list of list of int): A grid representing the island, where:
            0 represents a water zone
            1 represents a land zone

    Returns:
        int: The perimeter of the island

    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                perimeter += 4
                if i > 0 and grid[i - 1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j - 1] == 1:
                    perimeter -= 2

    return (perimeter)

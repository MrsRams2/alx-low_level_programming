#!/usr/bin/python3
"""This module contains a function that returns the perimeter of an island
described in a grid.
The function is documented below.
"""


def island_perimeter(grid):
    """This function returns the perimeter of an island described in a grid.
    The grid represents water by 0 and land by 1.
    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    # 1. We first find the width and height of the grid.
    # 2. Then iterate through the grid and find the number of edges and the
    # number of nodes.
    # 3. Next we return the number of nodes * 4 - number of edges * 2.
    # Time Complexity: O(n^2)
    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2

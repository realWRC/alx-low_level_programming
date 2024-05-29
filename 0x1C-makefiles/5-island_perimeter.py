#!/usr/bin/python3
"""Defines function island_perimeter(grid)"""


def island_perimeter(grid):
    """Function that returns the perimeter of an island"""
    height = len(grid)
    width = len(grid[0])
    boundary = 0
    land = 0
    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                land += 1
                if (i > 0) and (grid[i - 1][j]) == 1:
                    boundary += 1
                if (j > 0) and (grid[i][j - 1] == 1):
                    boundary += 1
    perimeter = (land * 4) - (boundary * 2)
    return perimeter

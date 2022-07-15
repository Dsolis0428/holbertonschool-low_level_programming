#!/usr/bin/python3
"""This module contains one function island_perimeter(grid):"""


def island_perimeter(grid):
    """Returns the perimeter of the island described in grid"""
    perimeter = 0
    for row in grid:
        for nb in row:
            if nb == 1:
                peirmeter += 2
    if perimeter > 0:
        perimeter += 2
    return perimeter

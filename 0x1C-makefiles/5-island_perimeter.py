#!/usr/bin/python3
""" Island perimeter module """


def island_perimeter(grid):
    """ Island perimeter function takes the lenght of a island """
    num = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                if i > 0 and grid[i - 1][j]:
                    num -= 1
                if j > 0 and grid[i][j - 1]:
                    num -= 1
                if i < len(grid) - 1 and grid[i + 1][j]:
                    num -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1]:
                    num -= 1
                num += 4
    return num

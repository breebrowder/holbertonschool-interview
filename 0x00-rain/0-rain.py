#!/usr/bin/python3
"""
  Method calculates how many square units of water
  will be retained after it rains
"""


def rain(walls):
    """
    walls is a list of non-negative integers
    Return: Integer indicating total amount of rainwater retained.
    Assume that the ends of the list (before index 0 and after index
    walls[-1]) are not walls, meaning they will not retain water
    If the list is empty return 0

    0 is the ground level
    iterate through the length of the entire list
    move through the left list going through each index
    at each index, track the height and keep moving
    when new index is a positive integer add to amount of water retained
    maximum level in the right list is 4

   """

    waterRetained = 0

    if not walls:
        return 0

    for idx in range(len(walls)):
        left = max(walls[:idx + 1])
        right = max(walls[idx:])

        waterRetained += max(min(left, right) - walls[idx], 0)
    return waterRetained

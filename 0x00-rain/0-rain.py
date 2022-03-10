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

    """

    waterRetained = 0

    for i in range(len(walls)):
        left = max(walls[:i + 1])
        right = max(walls[i:])
        waterRetained += max(min(left, right) - walls[i], 0)
    return waterRetained

#!/usr/bin/python3
"""
makeChange function
"""


def makeChange(coins, total):
    """
    Given a pile of coins of different values, determine the fewest number of coins needed to meet a given amount total
    """
    if total <= 0:
        return 0

    Tmp = [0 for i in range(0, total+1)]

    Len = len(coins)
    for idx in range(1, total+1):
         #  positive infinity
        smallest = float("inf")
        for y in range(0, Len):
            if (coins[y] <= idx):
                smallest = min(smallest, Tmp[idx - coins[y]])
        Tmp[idx] = 1 + smallest
         #  positive infinity
    if smallest == float("inf"):
        return -1
    return Tmp[total]

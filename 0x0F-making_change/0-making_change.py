#!/usr/bin/python3
""" makeChange function """

def makeChange(coins, total):
    """ Given a pile of coins, determine the fewest number of coins needed to meet a given amount total """
    
    if total <= 0:
        return 0

    remainder = 0
    num = 0
    idx = 0
    # Sort from the highest to the lowest
    sorted = sorted(coins, reverse=True)
    while(remainder < total and idx < len(coins)):
        if (remainder + sorted[idx] <= total):
            remainder += sorted[idx]
            num += 1
        else:
            idx += 1
      if change == total:
      return num
    return -1
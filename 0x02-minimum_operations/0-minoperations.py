#!/usr/bin/python3
""" Task 0: Minimum Operations """


def minOperations(n):
    """
    In a text file, there is a single character H. Your text editor can execute
    only two operations in this file: Copy All and Paste. Given a number n,
    write a method that calculates the fewest number of operations needed to
    result in exactly n H characters in the file.

    - Prototype: def minOperations(n)
    - Returns an integer
    - If n is impossible to achieve, return 0
    - if n < 2 or type(n) is not int:
        return 0
    """
    operations = []
    if (isinstance(n, int) is False):
        return 0
    if (n < 2):
        return 0
    while (n % 2 == 0):
        operations.append(2)
        n = n // 2
    for i in range(3, n + 1, 2):
        while (n % i == 0):
            operations.append(i)
            n = n // i
    return sum(operations)

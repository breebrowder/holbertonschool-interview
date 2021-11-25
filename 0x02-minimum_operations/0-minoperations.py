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
    i = 1
    while n != 1:
        i += 1
        if n % i == 0:
            while (n % i == 0 and n != 1):
                n = n / i
                operations.append(i)
    return sum(operations)

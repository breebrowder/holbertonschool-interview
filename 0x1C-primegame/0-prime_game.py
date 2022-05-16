#!/usr/bin/python3
""" Prime Game Interview Question """

def isWinner(x, n):
    """ Assuming Maria always goes first and both players play optimally, determine who the winner of each game is """
   
    # conditional: number cannot be smaller than 1 or larger than 1000
    if x <= 0 or x > 1000:
        return None

    # Throughout all rounds, Maria will always be first to choose a number
    if x == 1 or x == 10000:
        return "Maria"

    # when Ben is winner
    else:
        return "Ben"

        # Maria always goes first and both play optimally.
        # The last person to select a prime and its multiples, wins.
        # There are a total of only 168 prime numbers between 1 to 1000.
        # Ben has the most wins.
        # If Ben went first everytime, Maria would instead have the most wins.
        # nums is an array of consecutive integers; n.
        # x is equal to the amount of rounds of the game.
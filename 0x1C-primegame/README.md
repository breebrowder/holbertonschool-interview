# Requirements

## General
* Allowed editors: vi, vim, emacs
* All your files will be interpreted/compiled on Ubuntu 14.04 LTS using python3 (version 3.4.3)
* All your files should end with a new line
* The first line of all your files should be exactly #!/usr/bin/python3
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should use the PEP 8 style (version 1.7.x)
* All your files must be executable



## Tasks

### 0. Prime Game

Maria and Ben are playing a game. Given a set of consecutive integers starting from <b>1</b> up to and including <b>n</b>, they take turns choosing a prime number from the set and removing that number and its multiples from the set. The player that cannot make a move loses the game.

They play <b>x</b> rounds of the game, where <b>n</b> may be different for each round. Assuming Maria always goes first and both players play optimally, determine who the winner of each game is.

- Prototype: <b>def isWinner(x, nums)</b>
- where <b>x</b> is the number of rounds and <b>nums</b> is an array of <b>n</b>
- Return: name of the player that won the most rounds
- If the winner cannot be determined, return <b>None</b>
- You can assume <b>n</b> and <b>x</b> will not be larger than 10000
- You cannot import any packages in this task

Example:

- <b>x</b> = <b>3</b>, <b>nums</b> = <b>[4, 5, 1]</b>

#### First round: <em>4</em>

- Maria picks 2 and removes 2, 4, leaving 1, 3
- Ben picks 3 and removes 3, leaving 1
- Ben wins because there are no prime numbers left for Maria to choose

#### Second round: <em>5</em>

- Maria picks 2 and removes 2, 4, leaving 1, 3, 5
- Ben picks 3 and removes 3, leaving 1, 5
- Maria picks 5 and removes 5, leaving 1
- Maria wins because there are no prime numbers left for Ben to choose

#### Third round: <em>1</em>

- Ben wins because there are no prime numbers for Maria to choose

<b>Result: Ben has the most wins</b>

#### Main file is located in the directory for reference.
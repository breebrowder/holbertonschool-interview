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

### 0. Change comes from within

Given a pile of coins of different values, determine the fewest number of coins needed to meet a given amount <b>total</b>.

- Prototype: <b>def makeChange(coins, total)</b>
- Return: fewest number of coins needed to meet <b>total</b>
  1. If <b>total</b> is <b>0</b> or less, return <b>0</b>
  2. If <b>total</b> cannot be met by any number of coins you have, return <b>-1</b>
- <b>coins</b> is a list of the values of the coins in your possession
- The value of a coin will always be an integer greater than <b>0</b>
- You can assume you have an infinite number of each denomination of coin in the list
- Your solution’s runtime will be evaluated in this task


#### Main file is located in the directory for reference.
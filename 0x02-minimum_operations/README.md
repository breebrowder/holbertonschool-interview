# Requirements

## General
* Allowed editors: vi, vim, emacs
* All your files will be interpreted/compiled on Ubuntu 14.04 LTS using python3 (version 3.4.3)
* All your files should end with a new line
* The first line of all your files should be exactly #!/usr/bin/python3
* A README.md file, at the root of the folder of the project, is mandatory
* Your code should be documented
* Your code should use the PEP 8 style (version 1.7.x)
* All your files must be executable



## Tasks

### 0. Minumum Operations

In a text file, there is a single character <b>H</b>. Your text editor can execute only two operations in this file: <b>Copy All</b> and <b>Paste</b>. Given a number <b>n</b>, write a method that calculates the fewest number of operations needed to result in exactly <b>n H</b> characters in the file.

- Prototype: <b>def minOperations(n)</b>
- Returns an integer
- If <b>n</b> is impossible to achieve, return <b>0</b>

<b>Example:</b>

````
n = 9

H => Copy All => Paste => HH => Paste =>HHH => Copy All => Paste => HHHHHH => Paste => HHHHHHHHH
````
Number of operations: <b>6</b>


#### Main file is located in the directory for reference.
# Requirements

## General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 14.04 LTS
* Your programs and functions will be compiled with gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
* All your files should end with a new line
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
* The prototypes of all your functions should be included in your header file called menger.h
* Don’t forget to push your header file
* All your header files should be include guarded


## Tasks

### 0. 2D Menger Sponge

Write a function that draws a 2D Menger Sponge

- Prototype: <b>void menger(int level);</b>
- Where <b>level</b> is the level of the Menger Sponge to draw
- If <b>level</b> is lower than <b>0</b>, your function must do nothing
- You’re allowed to use the <b>math</b> library. Your program will be compiled using the <b>ld</b> flag <b>-lm</b>

Format:

- First, read [Menger sponge](https://en.wikipedia.org/wiki/Menger_sponge)
- Here, we will only draw a 2D version of the Menger sponge, but the principle is the same
- A level <b>N</b> sponge is a 3x3 square of level <b>N-1</b> sponges, except for the center one, which is left empty
- A level 0 sponge is represented by the <b>#</b> character

Examples:
- A level 0 sponge is a simple 1x1 square
- A level 1 sponge is a 3x3 square of level 0 sponges, except for the center one, which is left empty
- A level 2 sponge is a 3x3 square of level 1 sponges, except for the center one, which is left empty
- …
- TIP: The size of a level <b>N</b> Menger sponge is calculated as follows: <b>3^N</b>


#### Main file is located in the directory for reference.
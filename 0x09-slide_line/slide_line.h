#ifndef _SLIDE_LINE_H
#define _SLIDE_LINE_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

#define SLIDE_LEFT - 1
#define SLIDE_RIGHT + 1


int slide_line(int *line, size_t size, int direction);

#endif /* SLIDE_LINE_H */

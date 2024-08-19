#include <stdio.h>

#ifndef DEFS_H
#define DEFS_H

void PRINT1(int a) {
    printf("***** PRINT 1 FUNCTION *****\n");
    printf("The value of a is %d\n", a);
}

void PRINT2(int a, int b) {
    printf("***** PRINT 2 FUNCTION *****\n");
    printf("The value of a is %d\n", a);
    printf("The value of b is %d\n", b);
}

#endif
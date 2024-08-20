#include <stdio.h>

#ifndef DEFS_H
#define DEFS_H

int MAX2(int a, int b) {
    return a>b ? a : b;
}

int MAX3(int a, int b, int c) {
    return MAX2(MAX2(a,b), c);
}

#endif
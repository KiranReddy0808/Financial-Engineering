#include <stdio.h>

int main () {
    int x=2;
    int y;
    int z;

    x*=3+2;
    /* x = 2*5 = 10*/
    printf("x=%d\n", x);

    x*=y=z=4;
    /* x=10*4 = 40. Value assignment is from right to left.*/
    printf("x=%d\n", x);

    x=y==z;
    /* x = 1, y=4, z= 4 x is 1 as y==z is a check if they are equal since they are the value of x is 1*/
    printf("x=%d\n", x);

    return 0;
}
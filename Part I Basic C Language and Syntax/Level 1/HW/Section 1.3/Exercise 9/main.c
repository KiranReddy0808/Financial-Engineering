#include<stdio.h>

int main() {
    int x = 1;
    int y = 1;
    int z = 1;

    /* y = 2, x = 3*/
    x+=y+=x;

    /* (3<2) ? 2: 3 = 3*/
    printf("%d\n\n", (x<y) ? y : x);

    /* (3<2) ? 3++ : 2++ = 2*/
    printf("%d\n", (x<y) ? x++ : y++);

    /*x=3 from before as x++ didn't get called*/
    printf("%d\n", x);

    /*y=2++ from before; y=3*/
    printf("%d\n", y);

    return 0;
}
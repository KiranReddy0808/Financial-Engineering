#include <stdio.h>

int main() {
    int x;

    /* x = -3 + 20 -6 = 11*/
    x = -3 + 4 * 5 - 6;
    printf("x = %d\n", x);

    /* x = 3 + 4 - 6 = 1*/
    x = 3 + 4 % 5 - 6;
    printf("x = %d\n", x);

    /*x = -3 *(2/5) = -3 * 0 = 0 */
    x = -3 * 4 % -6 / 5;
    printf("x = %d\n", x);

    /* x = (7 + 6) % 5 / 2 = 13 % 5 / 2 = 3 / 2 = 1*/
    x = (7 + 6) % 5 / 2;
    printf("x = %d\n", x);

    return 0;
}
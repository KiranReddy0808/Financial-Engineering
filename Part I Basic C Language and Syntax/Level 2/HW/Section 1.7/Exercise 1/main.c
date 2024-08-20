#include <stdio.h>


void swap (int* ptr_i, int* ptr_j) {
    int temp = *ptr_i;
    *ptr_i = *ptr_j;
    *ptr_j = temp;
}

int main() {

    int i = 123, j = 456;

    printf("Before swap: i = %d, j = %d\n", i, j);

    swap(&i, &j);

    printf("After swap: i = %d, j = %d\n", i, j);

    return 0;
}
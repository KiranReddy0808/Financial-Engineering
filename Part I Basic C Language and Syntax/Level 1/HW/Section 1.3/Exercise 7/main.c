#include<stdio.h>

int main() {
    int number, shift;
    printf("Enter the number and the power of 2 to be multiplied: ");
    scanf("%d %d", &number, &shift);
    int shifted = number << shift;
    printf("The value after multiplication of the number by 2^%d is %d\n", shift, shifted);

    return 0;

}
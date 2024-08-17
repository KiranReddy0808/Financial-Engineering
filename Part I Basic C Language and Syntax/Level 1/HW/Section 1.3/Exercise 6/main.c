#include<stdio.h>

int main() {
    int toBeShiffted, shifted;
    printf("Enter an Integer Input: ");
    scanf("%d", &toBeShiffted);
    shifted = toBeShiffted >> 2;
    printf("The value of the integer after shifting right by 2 is: %d\n", shifted);
    (shifted > 0) ? printf("The value is Arithmetic Right Shifted\n") : printf("The value is Logical Right Shifted\n");
    return 0;
    
}
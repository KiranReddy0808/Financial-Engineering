#include<stdio.h>

int minus(int a, int b) {
    return a-b;
}
int main () {
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("\nThe difference between %d and %d is %d\n", a, b, minus(a,b));
    return 0;
}
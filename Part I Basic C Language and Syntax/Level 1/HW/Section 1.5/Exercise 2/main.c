#include<stdio.h>

int fact(int a) {
    return a == 0 ? 1 : a * fact(a-1);
}
int main () {
    int a,b;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("\nThe factorial of %d is %d\n", a, fact(a));
    return 0;
}
#include<stdio.h>

int main() {
    int i, val;
    printf("Enter an integer value for i: ");
    scanf("%d", &i);
    val = i;
    printf("\n\nThe value of i is %d", i);
    printf("\n--i removes the value from i before the operation is performed, so the value of --i is %d", --i);
    printf("\nThe value of i now %d", i);
    i = val;
    printf("\n\nThe value of i is reset to %d", i);
    printf("\ni-- removes the value from i after the operation is performed, so the value of i-- is %d", i--);
    printf("\nThe value of i now %d\n", i);
    return 0;
}
#include<stdio.h>
#include "print.h"

int main () {
    int i;
    printf("Enter a number to assign to i: ");
    scanf("%d", &i);
    print(i);
    return 0;
}
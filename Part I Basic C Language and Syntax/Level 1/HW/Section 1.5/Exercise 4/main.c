#include<stdio.h>

void printnumber(int a) {
    if(a == 0) {
        return;
    }
    int b = a%10;
    a /= 10;
    putchar(b+'0');
    printnumber(a);
}

int main () {
    int i;
    printf("Enter a number to assign to i: ");
    scanf("%d", &i);
    printnumber((i>0)?i:-i);
    printf("\n");
    return 0;
}
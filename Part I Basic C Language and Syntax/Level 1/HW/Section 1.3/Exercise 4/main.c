#include<stdio.h>

int main () {
    int married;
    printf("Are you married? (1 for yes, 0 for no): ");
    scanf("%d", &married);
    printf("You are %s\n", (married == 0)? "not married" : "married");
    return 0;

}
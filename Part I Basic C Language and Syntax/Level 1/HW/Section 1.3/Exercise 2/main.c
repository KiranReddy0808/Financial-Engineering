#include<stdio.h>

int main () {
    printf("Calculate area of a right angled triangle \nPlease input the base and height of the triangle \n");
    printf("Base: ");
    float base, height;
    scanf("%f", &base);
    printf("Height: ");
    scanf("%f", &height);
    printf("The area of the triangle is: %f\n", 0.5 * base * height);
    return 0;
}
#include<stdio.h>

int main () {

    int lower_bound = 0, upper_bound = 300, step = 20;

    printf("Enter lower bound on fahrenheit: ");
    scanf("%d", &lower_bound);
    printf("\nEnter upper bound on fahrenheit: ");
    scanf("%d", &upper_bound);
    printf("\nEnter increments value: ");
    scanf("%d", &step);

    printf("\n\nFahrenheit to Celsius\n");

    while(lower_bound <= upper_bound) {
        printf("%d\t%d\n", lower_bound, 5 * (lower_bound - 32) / 9);
        lower_bound += step;
    }
    return 0;
}
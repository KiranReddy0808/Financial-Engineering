#include<stdio.h>

int main () {

    int lower_bound = 0, upper_bound = 300, step = 20;

    printf("Enter lower bound on celsius: ");
    scanf("%d", &lower_bound);
    printf("\nEnter upper bound on celsius: ");
    scanf("%d", &upper_bound);
    printf("\nEnter increments value: ");
    scanf("%d", &step);

    printf("\n\nCelsius to Fahrenheit\n");

    while(lower_bound <= upper_bound) {
        printf("%d\t%d\n", lower_bound, 9 * lower_bound / 5 + 32);
        lower_bound += step;
    }
    return 0;
}
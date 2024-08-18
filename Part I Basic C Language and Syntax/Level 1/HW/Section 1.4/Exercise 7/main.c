#include <stdio.h>

int main () {
    int input, num, zero_freq = 0, one_freq = 0, two_freq = 0, three_freq = 0, four_freq = 0;

    printf("Input digits. The code measures frequency of only 0-4 digits. Press Ctrl+D to end input.\n");
    while((input = getchar()) != EOF) {
        num = input - '0';
        switch (num) {
            case 0:
                zero_freq++;
                break;
            case 1: 
                one_freq++;
                break;
            case 2: 
                two_freq++;
                break;
            case 3: 
                three_freq++;
                break;
            case 4:
                four_freq++;
                break;
            default:
                break;
        }
    }
    printf("\n0: %d\n", zero_freq);
    printf("1: %d\n", one_freq);
    printf("2: %d\n", two_freq);
    printf("3: Number three appears %s times \n",(three_freq == 0)? "zero": (three_freq == 1)? "one": (three_freq == 2)? "two": "more than two");
    printf("4: %d\n", four_freq);

    return 0;
}
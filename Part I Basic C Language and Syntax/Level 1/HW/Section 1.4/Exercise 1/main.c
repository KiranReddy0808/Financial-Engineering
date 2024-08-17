#include<stdio.h>

int main() {

    char input;
    int chars_len = 0;
    int endofline_len = 0;
    int mightbeword = 0;
    int words = 0;
    printf("Input anything: \n");
    while((input = getchar()) != EOF) {
        if(input == 10 || input == 13) {
            endofline_len++;
        }
        if(input == 32 || input == 10 || input == 9) {
            if(mightbeword) {
                words++;
                mightbeword = 0;
            }
        } else {
            mightbeword = 1;
        }
        chars_len++; 
    }
    if(mightbeword) {
        words++;
    }
    printf("\nYou have entered %d characters\n", chars_len);
    printf("You have entered %d lines\n", endofline_len+1);
    printf("You have entered %d words\n", words);
    return 0;
}
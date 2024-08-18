#include <stdio.h>

#include<stdio.h>

int main() {

    char input;
    int chars_len = 0;
    int endofline_len = 0;
    int mightbeword = 0;
    int words = 0;
    printf('Input anything: \n');
    while((input = getchar()) != EOF) {
        switch (input) {
            case 13:
                endofline_len++;
                break;
            case 32:
            case 9:
                if(mightbeword) {
                    words++;
                    mightbeword = 0;
                }
                break;
            case 10:
                if(mightbeword) {
                    words++;
                    mightbeword = 0;
                }
                endofline_len++;
                break;
            default:
                mightbeword = 1;
                break;
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
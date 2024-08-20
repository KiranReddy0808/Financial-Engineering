#include <stdio.h>
#define MAXLINE 30

int Length(char str[]){
    int i=0;
    while (str[i]!='\0') {
        i++;
    }
    return i;
}

int main(){
    char string[MAXLINE+1];  // Line of maxium 30 chars + \0
    int c;                   // The input character
    int i=0;                 // The counter
    
    // Print intro text
    printf("Type up to %d chars. Exit with ^D\n", MAXLINE);
    // On MacOS EOF is ^D instead of ^Z

    // Get the characters
    while ((c=getchar())!=EOF && i<MAXLINE) {
        string[i++]=(char)c;
    }
    string[i]='\0';          // String must be closed with \0

    printf("\nString length is %d\n", Length(string));
    return 0;
}

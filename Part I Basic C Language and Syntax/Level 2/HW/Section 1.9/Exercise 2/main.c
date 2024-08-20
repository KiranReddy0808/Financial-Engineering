#include <stdio.h>
#include <stdlib.h>

const int MAX = 1000;

int main() {

    int input;
    int counter=0;
    int upperBound = 0;
    int* output = (int*)malloc(MAX*sizeof(int));
    char fileName[100];

    printf("Enter name of the file:");
    scanf("%s", fileName);
    FILE *file = fopen(fileName, "w");
    if(file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while((input = getchar()) != 1) {
        upperBound = counter;
        if(input == 10) {
            while(counter > 0) {
                fprintf(file, "%c", output[upperBound - counter]);
                counter--;
            }
            printf("\n");
            free(output);
            int* output = (int*)malloc(MAX*sizeof(int));
        }
        else {
            output[counter] = input;
            counter++;
        }
    }
    printf("CTRL + A is correct ending.");
    return 0;
}
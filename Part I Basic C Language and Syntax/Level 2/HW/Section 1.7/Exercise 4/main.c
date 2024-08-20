#include <stdio.h>

char* DayName(int day, char * Days[]) {
    return Days[day];
}

int main() {

    char * Days[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    int day = 0;
    printf("Enter a day number:");
    scanf("%d", &day);

    printf("Day %d: %s\n", day, DayName((day-1)%7, Days));

    return 0;
}
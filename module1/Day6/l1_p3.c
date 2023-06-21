#include <stdio.h>

struct Time {
    int hrs; // hours
    int min; //minutes
    int sec; //seconds
};

struct Time getTimeDifference(struct Time start, struct Time end) {
    struct Time diff;
    int totalSec1, totalSec2, timeDiff;

    totalSec1 = start.hrs * 3600 + start.min * 60 + start.sec;
    totalSec2 = end.hrs * 3600 + end.min * 60 + end.sec;

    timeDiff = totalSec2 - totalSec1;

    diff.hrs = timeDiff / 3600;
    diff.min = (timeDiff % 3600) / 60;
    diff.sec = (timeDiff % 3600) % 60;

    return diff;
}

int main() {
    struct Time startTime, endTime, difference;

    printf("Enter start time (hours minutes seconds): ");
    scanf("%d %d %d", &startTime.hrs, &startTime.min, &startTime.sec);
    printf("Enter end time (hours minutes seconds):");
    scanf("%d %d %d", &endTime.hrs, &endTime.min, &endTime.sec);
    difference = getTimeDifference(startTime, endTime);

    printf("\nTime difference: %d hours, %d minutes, %d seconds\n", difference.hrs, difference.min, difference.sec);

    return 0;
}
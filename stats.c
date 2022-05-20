#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    int n;
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    for (int i = 0; i < setlength; ++i) {
        printf("%d. Enter number: ", i + 1);
    sum += num[i];
    avg = sum / n;
    printf("Average = %.2f", avg);
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

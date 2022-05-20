#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    int n,sum;
    float avg;
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    for (int i = 0; i < setlength; ++i) {
    sum += num[i];
    s.average = sum / n;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

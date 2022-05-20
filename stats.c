#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    float sum=0.0;
    for (int i=0;i<setlength;i++)
    {
        sum+=numberset[i];
    }
    s.average = sum/setlength;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    float sum=0;
    for (int i=0;i<setlength;i++)
    {
        sum =sum+numberset[i];
    }
    float avg=sum/setlength;
    s.average =avg;
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

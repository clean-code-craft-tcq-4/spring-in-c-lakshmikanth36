#include "stats.h"
#include <math.h>
#ifdef NAN
/* NAN is supported */
#endif

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
    s.max=numberset[0];
    for(int i = 0; i < setlength; i++){
        if(numberset[i] > s.max){
            s.max = numberset[i];
        }
    }	
    s.min=numberset[0];
    for(int i = 0; i < setlength; i++){
        if(numberset[i] < s.min){
            s.min = numberset[i];
        }
    }	
    for(int i = 0;i < setlength; i++){
       if(numberset[i] == 0){
          s.average =NAN;
          s.max=NAN;
          s.min= NAN;
         }
    } 
    return s;
}
Void check_and_alert(float, void (**)(), Stats)
{
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;



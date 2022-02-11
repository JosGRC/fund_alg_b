#include <stdio.h>
#include <stdlib.h>

//*Globlal Variables*//
char* date = "02-02-22T10:25:00z";
///////////////////////////////

/// La ejecucion del programa///
int main(){
    date = "02-03-22T10:25:00z";
    int hours = 24;
    hours = hours +2;
    printf("hours: %d\n", hours);
    return 0;
}
///////////////////////////////
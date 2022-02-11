#include <stdio.h>
#include <stdlib.h>

//*Globlal Variables*//
char* date = "02-02-22T10:25:00z";
///////////////////////////////

/// La ejecucion del programa///
int main(){
    date = "02-03-22T10:25:00z";
    int hours = 24;
    float pi = 3.1516; //%f
    char character = 'c'; // %c
    char name = "Daniel";
    int *address = &hours; //%p
    hours = hours +2;
    printf("valor: %c ", character);
    return 0;
}
///////////////////////////////
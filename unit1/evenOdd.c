#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>


//argv[1] = "8";
//argv[1] = {'8', '\0'};
//argv[1][0]; >> '8;
'
int main(int argc, char**argv){

    if (argc != 2) {
        printf("Error program: You need to insert a number, e.g: ./%s argv[1]\n", argv[0]);
        return 0;
    }

    bool isANumber = (argv[1] >= 48 && argv[1] <= 57)


    if ( !isANumber) {
        printf("Error program:U need to insert a number, e.g: %s argv[1]\n", argv[0]  );
        return 0;
    }

    int numberToTest = atoi(argv[1]);
    int operation = numberToTest % 2;
    bool hasModule = ( operation > 0 );
    

    if (hasModule) {
        printf("impa\n");
    } else {
        printf("par\n");
    }
    return 0;
}
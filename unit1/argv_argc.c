#include <stdio.h>
#include <string.h>

int main(int arg, char** argv){
    printf("Program executed: %s, number of inputs elements: %d", argv[0], (argc-1));
    printf("Hola %s %s %s %s, Bienvenido!\n", argv[1], argv[2], argv[3], argv[4]);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//temperatura
// frio: 16
// caliente: 29
int frio = 16;
int caliente = 29;
int sofa = 7000


int main(int argc, char** argv){
    int inputTemp = atoi(argv[1]);
    int inputMoney = atoi(argv[2]);
    char inputName = argv[3][0];   //--> "Famale"---> {'F', '\0'}
    bool temp_condition = (inputTemp == frio );
    bool temp_condition2 = (inputTemp == caliente);
    bool temp_condition3 = (inputTemp >= caliente);
    bool canRobotMove = (inputTemp <= caliente);
    bool hasUserMoney =( inputMoney == sofa);
    bool isUserFamale = (inputName !='F' );

    if(canRobotMove == true){
        // Robot.move(x_coord, y_coord);
    } else {
        //Robot.stop(x_coord, y_coord);
    }

        if(hasUserMoney){
            // Allows to buy
    } else {
        //rejected product
    }

    // e.g.
    int price Product = 500;
    int userMoney - argv[1];
    bool hasuserMoney = (usermoney >= priceProduct);
     
    if (has user money){
        printf("The product was sended!");
    } else {
        printf("The product was rejected!");
    }

    return 0;
}
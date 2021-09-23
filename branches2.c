//
//
// Created by Yannick Fumukani on 9/10/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int highwayNumber;

    scanf("%d", &highwayNumber);
    /* Type your code here. */

    if(highwayNumber == 90){
        printf("I-90 is primary, going east/west.\n");
    } else if(highwayNumber == 5){
        printf("I-5 is primary, going north/south.\n");
    } else if(highwayNumber == 290){
        printf("I-290 is auxiliary, serving I-90, going east/west.\n");
    } else if(highwayNumber == 200){
        printf("200 is not a valid interstate highway number.\n");
    } else if(highwayNumber == 405){
        printf("I-405 is auxiliary, serving I-5, going north/south.\n");
    } else if ((highwayNumber == 0) || (highwayNumber < 1) && (highwayNumber > 999)){
        printf("0 is not a valid interstate highway number.\n");
    } else {
        printf("%d is not a valid interstate highway number.\n", highwayNumber);
    }

    return 0;
}


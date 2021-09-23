//
// Created by Yannick Fumukani on 9/17/21.
//
#include<stdio.h>

int main(){

    const int NUM_ELEMENTS = 20;         // Number of input integers
    int userVals[NUM_ELEMENTS];          // Array to hold the user's input integers

    for(int x = 0; x < NUM_ELEMENTS; x++){
        scanf("%d", &userVals[x]);
    }

    for(int i=NUM_ELEMENTS; i > 0; i--){
        if(userVals[i] != 0){
            printf("%d,", userVals[i]);
        }

    }
    printf("\n");

    return 0;
}


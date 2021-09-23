//
// Created by Yannick Fumukani on 9/10/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    int x, y, z;

    //printf("Please provide 3 values");
    scanf("%d", &x);
    scanf("%d", &y);
    scanf("%d", &z);

    if(x < y && x < z){
        printf("%d", x);
    }

    if(y < x && y < z){
        printf("%d", y);
    }

    if(z < y && z < x){
        printf("%d", z);
    }

    return 0;
}


//
// Created by Yannick Fumukani on 9/14/21.
//

// This program change a positive number into its binary equivalent
#include<stdlib.h>
#include<stdio.h>

int main () {

    int x;

    scanf("%d", &x);

    while(x > 0){
        printf("%d", x %2);
        x /= 2;
    }
    return 0;
}

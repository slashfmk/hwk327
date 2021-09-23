//
// Created by Yannick Fumukani on 9/14/21.
//

#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int main(){


    bool check = false;
    int a, b, c;
    int d, e, f;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    scanf("%d", &f);


    for(int x = -10; x < 10; x++){
        for(int y = -10; y < 10; y++){
            if(a * x + b * y == c && d * x + e * y == f){
                check = true;
                printf("x = %d, y = %d\n", x, y);
            }
        }
    }

    if(check == false) printf("There is no solution\n");

    return 0;
}
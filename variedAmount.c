//
// Created by Yannick Fumukani on 9/14/21.
//

#include<stdio.h>
#include<stdlib.h>

int main(){

    int sum = 0;
    int count  = 0;
    int max = 0;

    //printf("Enter positive integer numbers to be processed. -1 to terminate: ");
    for (int input; (scanf("%d", &input)) && (input >= 0); ++count, sum += input)
        if (input > max)
            max = input;

    printf("%d %d", max, (sum / count));

    return 0;
}
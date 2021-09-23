//
// Created by Yannick Fumukani on 9/17/21.
//
#include<stdio.h>

int main(){

    int sizeArray = 0;

    scanf("%d", &sizeArray);

    char words[sizeArray][20];
    char wordFrequency[sizeArray];

    for(int i=0; i < sizeArray; i++){
        scanf("%s", &words[i]);
    }

    return 0;
}

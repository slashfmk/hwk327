//
// Created by Yannick Fumukani on 9/8/21.
//
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long phoneNumber;
    /* Add more variables as needed */
    long part3, part2, part1, chuppiing;

    scanf("%lld", &phoneNumber);
    /* Type your code here. */

    chuppiing = phoneNumber % 10000000;

    part3 = phoneNumber % 10000;
    part2 = (chuppiing * 100) / 1000000;
    part1 = phoneNumber / 10000000; // 1000

    //  printf("(%.3s)%.3s-%.4s\n", phoneNumber, phoneNum, phoneNumber + 6);
    printf("(%ld) %ld-%ld\n", part1, part2, part3);


    return 0;
}


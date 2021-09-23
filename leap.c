//
// Created by Yannick Fumukani on 9/10/21.
//
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>


int main() {

    int inputYear;
    bool isLeapYear = false;

    scanf("%d", &inputYear);

    if (((inputYear % 400) == 0 || (inputYear % 100) != 0) && (inputYear % 4) == 0) {
        isLeapYear = true;
    }

    printf("%d - %s", inputYear, isLeapYear ? "leap year" : "not leap year");


    return 0;
}
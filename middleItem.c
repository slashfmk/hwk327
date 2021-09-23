//
// Created by Yannick Fumukani on 9/17/21.
//
#include <stdio.h>

int main(void) {
    const int NUM_ELEMENTS = 19;
    int userValues[NUM_ELEMENTS];    // Set of data specified by the user

    int count = 0;
    int middle;
    int countSize = 0;

    for(int i = 0; i < NUM_ELEMENTS; i++){
        scanf("%d", &userValues[i]);
        countSize++;

        if(userValues[i] == -1) {
            break;
        } else {
            count++;
        }
    }

    if(count > 9) {
        printf("Too many numbers\n");
    } else {
        middle = (count / 2);
//        printf("size: %lu\n", countSize);
        printf("Middle item: %d\n", userValues[middle]);
    }

    return 0;
}


//
// Created by Yannick Fumukani on 9/9/21.
//

#include <stdio.h>

void arrayMemory(int *myArray, int size);

int main(){

    int numbers[9] = {1, 6, 3, 4, 5, 6, 7, 98, 45};
    int *pLocations = numbers;

    printf("Size of array %lu \n", sizeof(pLocations));

    for(int i = 0; i < 9; i++){
        printf("Location %p: and value: %d\n", (int*) &pLocations + i, *pLocations+i);
    }

    arrayMemory(pLocations, 9);

    int position = 6;

//    printf("Memory address for the array via array %d element: %p\n", position, &numbers[position]);
//    printf("Memory address for the array via pointer %d element: %p\n", position,  (int*) pLocations + position);

    return 0;
}

void arrayMemory(int *myArray, int size){

    printf("Size of array %d \n", size);

    for(int i = 0; i < size; i++){
        printf("Location %p: and value: %d\n", (int*) &myArray + i, *myArray + i);
    }
}
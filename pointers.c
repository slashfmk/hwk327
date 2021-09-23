//
// Created by Yannick Fumukani on 9/9/21.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

    int age = 9;

    int *ptr = malloc(sizeof(int));

    *ptr = &age;
    *ptr = 55;

    printf("The age is %d: ", age);

    free(*ptr);

return 0;
}

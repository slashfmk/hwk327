//
// Created by Yannick Fumukani on 9/14/21.
//
#include<stdio.h>
#include<stdlib.h>


int add(int a, int b);

int main(){
    // [] and the *
    // this just means that we have 10 pointers pointing to integers
    int *ptr[10];

    // This means we have 1 pointer pointing to a 10 integer array
    // alter precedence by putting parentheses
    int (*ptr2)[10];

    // Pointer function
    int (*ptrTofunc)(int a, int b);

    int (*myResult)(int, int) = add;

    int result = myResult(10, 56);
    int result2 = myResult(78, 89);

    printf("The result is %d\n", result);
    printf("The result is %d\n", result2);

    return 0;
}

int add(int a, int b){
    return a + b;
}


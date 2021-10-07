//
// Created by Yannick Fumukani on 9/30/21.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct Number_struct {
    int num;
} Number;

void Swap(Number* numPtr1, Number* numPtr2) {
    /* Your code goes here */
   // int *temp = malloc(sizeof (int));
    int temp = numPtr1->num;
    numPtr1->num = numPtr2->num;
    numPtr2->num = temp;
}

int main(void) {
    Number* num1 = NULL;
    Number* num2 = NULL;

    num1 = (Number*)malloc(sizeof(Number));
    num2 = (Number*)malloc(sizeof(Number));

    int int1;
    int int2;

    scanf("%d", &int1);
    scanf("%d", &int2);

    num1->num = int1;
    num2->num = int2;

    Swap(num1, num2);
    printf("num1 = %d, num2 = %d\n",  num1->num, num2->num);

    return 0;
}
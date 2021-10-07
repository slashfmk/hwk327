//
// Created by Yannick Fumukani on 10/7/21.
//

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct {
    char *name;
    double (*grades)[5];
    double (*on)[5];
} Student;

void finalGrade(double *myArray, double *outOf, int size);

void calc1();

void studentStuff();

int main() {

    studentStuff();
    return 0;
}

void studentStuff() {

    Student student;
    double grade[5];
    double on[5];

    student.grades = &grade;
    student.on = &on;

    printf("Your name: ");
    scanf("%s", student.name);
   // strcpy(student.name, "");


    for(int x = 0; x < 5; x++){
        printf("Your grade: ");
        scanf("%lf",  &grade[x]);
        printf("out of how much: ");
        scanf("%lf", &on[x]);
    }

    printf("\n");
    printf("Result\n");
    printf("----------\n");
    printf("The student name is %s\n", student.name);
    finalGrade(student.grades, student.on, 5);
}

// Calculating student grades
void finalGrade(double *myArray, double *outOf, int size) {
    double sum = 0;
    double outOfSum = 0;
    double final = 0;

    for (int i = 0; i < size; i++) {
        printf("grade %d: %.2lf / %.2lf\n", i, *(myArray + i), *(outOf + i));
        sum += *(myArray + i);
        outOfSum += *(outOf + i);
    }

//    printf("Your average grade is %.2lf\n", sum / size);
    printf("Your final grade is %.2lf percents \n", (sum / outOfSum) * 100);
}

// calc
void calc1() {
    // pointer of integers
    int *ptr = malloc(sizeof(int));
    // Array of integers
    int numbers[] = {12, 67, 365, 90};
    // assign array memory address to numberPtr pointer
    int *numberPtr = &numbers;

    printf("please provide a number: ");
    scanf("%d", ptr);
    // prints stuff
    printf("The entered number is %d\n", *ptr);
    printf("The number is %d", *(numberPtr + 1));

    free(ptr);
    free(numberPtr);
}
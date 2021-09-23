//
// Created by Yannick Fumukani on 9/17/21.
//
#include<stdio.h>
#include <string.h>

//int my_strncmp(char *str1, char *str2, size_t max, char c)
//{
//    size_t n = 0;
//    while (n < max)
//    {
//        if ((str1[n] != str2[n]) || (str1[n] == c) || (str2[n] == c))
//            return 0;
//        n++;
//    }
//    return 1;
//}

int main(){

    char original[50];
    char inverse[50];

    scanf("%s", original);


    for(int i = strlen(original); i > 0; i--){
        inverse[i] = original[i];
    }




    return 0;
}
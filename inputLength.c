//
// Created by Yannick Fumukani on 9/17/21.
//

#include <stdio.h>
#include <string.h>

int main(){


  //  fgets(str, 50, stdin);

    char text[50];

    // Taking text of line as user input
    //printf("Enter text: ");
    scanf("%[^\n]%*c", text);

    int i, count = 0;

    // Using for loop to go through each character in the text and count spaces, periods, exclamation points, or commas.
    for (i = 0; i < strlen(text); i++) {
        if (text[i] == ' ' || text[i] == ',' || text[i] == '.' || text[i] == '!') {
            count++;
        }
    }

    // printing the number of characters excluding spaces, periods, exclamation points, or commas.
    printf("%lu\n", strlen(text)-count);
    return 0;

    return 0;
}


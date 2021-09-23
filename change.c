//
// Created by Yannick Fumukani on 9/10/21.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int dollars = 0;
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;

    int inputAmount;

    scanf("%d", &inputAmount);

    if (inputAmount > 0) {
        dollars = inputAmount / 100;
        int remainderDollar = inputAmount % 100;
        quarters = remainderDollar / 25;
        int remainderQuarters = remainderDollar % 25;
        dimes = remainderQuarters / 10;
        int remainderDimes = remainderQuarters % 10;
        nickels = remainderDimes / 5;
        int remainderNickels = remainderDimes % 5;
        pennies = remainderNickels / 1;
        int remainderPennies = remainderNickels % 1;

        if (dollars > 0) printf("%d %s\n", dollars, dollars == 1 ? "Dollar" : "Dollars");
        if (quarters > 0) printf("%d %s\n", quarters, quarters == 1 ? "Quarter" : "Quarters");
        if (dimes > 0) printf("%d %s\n", dimes, dimes == 1 ? "Dime" : "Dimes");
        if (nickels > 0) printf("%d %s\n", nickels, nickels == 1 ? "Nickel" : "Nickels");
        if (pennies > 0) printf("%d %s\n", pennies, pennies == 1 ? "Penny" : "Pennies");

    } else {
        printf("No change\n");
    }

    return 0;
}

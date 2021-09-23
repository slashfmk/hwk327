#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {


    double x = 5.0;
    double y = 6.5;
    double z = 3.2;

    /* Type your code here. Note: Include the math library above first. */
    printf("%0.2lf ", pow(x,z));
    printf("%0.2lf ", pow(x, pow(y,2)));
    printf("%0.2lf ", abs(y));
    printf("%0.2lf\n", sqrt(pow(x*y, z)));


    return 0;
}

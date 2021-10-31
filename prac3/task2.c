#include <stdio.h>
#include <math.h>

int main() {
    float x = 1.24;
    float h = 0.06;
    float f;
    int i;

    printf("\n");
    for (i = 0; i < 11; i++) {
        f = ( 7 * powf(x, 2) ) + ( 3 * sinf(powf(x, 3) ) + 9.2);
        printf("x = %6.3f  f(x) = %9.6f\n", x, f);
        x = x + h;
    }
    printf("\n");

    return 0;
}
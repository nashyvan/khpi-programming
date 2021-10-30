#include <stdio.h>
#include <math.h>

// 13

int main (void) {
    float E, y;

    printf("Введіть значення y: ");
    scanf("%f",&y);
    E = fabs( sqrtf( (3 * powf(y, 2)) + (0.5 * y) + 4 ) );
    printf("\nРезультат: y = %9.8f", E);
}
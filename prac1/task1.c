#include <stdio.h>
#include <math.h>

// 13

int main (void) {
    float E, y;

    printf("Введіть значення y: ");
    scanf("%f",&y);
    E = sqrtf( fabs( (3 * powf(y, 2)) + (0.5 * y) + 4 ) );
    printf("\nРезультат: E = %9.5f", E);
}
#include <stdio.h>
#include <math.h>

//#define M_PI 3.14159265358979323846


int main (void) {
    float x, y;

    printf("Введіть значення кута в градусах: ");
    scanf("%f",&x);
    y = sin(x * M_PI / 180);
    printf("\nsin %.f%c = %8.6f\n", x, 176, y);

    return 0;
}
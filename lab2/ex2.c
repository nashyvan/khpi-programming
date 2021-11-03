#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    printf("Введіть x: ");
    scanf("%f", &x);
    if ((x != 8) && (x * x >= 4)) {
        y = sqrtf(x * x - 4) / (x - 8);
        printf("\nЗначення функції y = %9.7f\n", y);
    } else {
        printf("\nНемає рішення\n");
    }

    return 0;
}
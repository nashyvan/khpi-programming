#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    printf("Введіть x: ");
    scanf("%f", &x);
    if ((x != 2)) {
        y = sqrtf(sinf(x)) / (x - 2);
        printf("\nЗначення функції y = %9.7f\n", y);
    } else {
        printf("\nЗнаменник дорівнює нулю. Немає рішення.\n");
    }

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    printf("Введіть x: ");
    scanf("%f", &x);
    if (x - 8 != 0) {
        if (x * x >= 4) {
            y = sqrtf(x * x - 4) / (x - 8);
            printf("\nЗначення функції y = %9.7f\n", y);
        } else {
            printf("\nПідкореневий вираз менше нуля. "
                   "Немає рішення\n");
        }
    } else {
        printf("\nЗнаменник дорівнює нулю. Немає рішення.\n");
    }

    return 0;
}

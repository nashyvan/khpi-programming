#include <stdio.h>
#include <math.h>

int main() {
    float x, h, f;
    int i;

    printf("Введіть початкове значення x:                 ");
    scanf("%f", &x);
    printf("Введіть крок для обчислення значення функції: ");
    scanf("%f", &h);

    printf("\n");
    for (i = 0; i < 10; i++) {
        f = cosf(x);
        printf("x = %6.3f  f(x) = %9.6f\n", x, f);
        x = x + h;
    }
    printf("\n");

    return 0;
}
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, h, x, f;

    printf("Введіть початкове значення для інтервалу [a,b]: ");
    scanf("%f", &a);
    printf("Введіть кінцеве значення для інтервалу [a,b]:   ");
    scanf("%f", &b);
    printf("Введіть крок для обчислення значення функції:   ");
    scanf("%f", &h);
    printf("\n");

    x = a;

    do {
        f = sinf(powf(x,2)) - x;
        printf("x = %6.3f  f(x) = %9.6f\n", x, f);
        x = x + h;
    } while (x <= b);
    printf("\n");

    return 0;
}

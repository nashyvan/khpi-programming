#include <stdio.h>
#include <math.h>

int main() {
    float x, y, result;

    printf(" Введіть x: ");
    scanf("%f", &x);
    printf(" Введіть y: ");
    scanf("%f", &y);

    if (x != 0) {
        result = x / y;
    } else if (x == 0 && y < 0) {
        result = powf(y, 2);
    } else {
        result = 5;
    }
    printf("\n %.6f\n", result);

    return 0;
}
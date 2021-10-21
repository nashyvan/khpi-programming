#include <stdio.h>
#include <math.h>

int main(void) {
    float x, y, z;

    printf("Введіть значення для змінної x: ");
    scanf("%f",&x);
    printf("Введіть значення для змінної y: ");
    scanf("%f",&y);

    if (x > 0) {
        z = logf(x) + y;
    } else {
        z = x + powf(y,2);
    }
    printf("\n\nz = %5.3f\n", z);

    return 0;
}
#include <stdio.h>
#include <math.h>

int main (void) {
    int N;
    float x, y, z;
    float x1, y1, z1;

    printf("Введіть довільне число N: ");
    scanf("%d",&N);

    if (N%2 == 0) {
        printf("Введіть значення для змінної x: ");
        scanf("%f",&x);
        printf("Введіть значення для змінної y: ");
        scanf("%f",&y);

        z = logf(x) + y;

        printf("\nz = %5.3f\n", z);
    } else {
        printf("Введіть значення для змінної x1: ");
        scanf("%f",&x1);
        printf("Введіть значення для змінної y1: ");
        scanf("%f",&y1);

        z1 = x1 + powf(y1,2);

        printf("\nz1 = %5.3f\n", z1);
    }
    return 0;
}
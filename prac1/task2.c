#include <stdio.h>
#include <math.h>

// 13

int main (void) {
    int N;
    float D, a, t;
    float S, y;

    printf("Введіть довільне число N: ");
    scanf("%d", &N);

    if (N%2 == 0) {
        printf("Введіть значення для змінної a: ");
        scanf("%f", &a);
        printf("Введіть значення для змінної t: ");
        scanf("%f", &t);

        D = (9.8 * powf(a, 2)) + (5.52 * cosf( powf(t, 5) ));

        printf("\nz = %5.3f\n", D);
    } else {
        printf("Введіть значення для змінної y: ");
        scanf("%f", &y);

        S = sqrtf( cosf(4 * powf(y, 2)) + 7.151 );

        printf("\nz1 = %5.3f\n", S);
    }
    return 0;
}
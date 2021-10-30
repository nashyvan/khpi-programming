#include <stdio.h>
#include <math.h>


int main (void) {
    float x, y, z;


    printf("Введіть значення x: ");
    scanf("%f", &x);
    printf("Введіть значення y: ");
    scanf("%f", &y);

    z = x + pow(y, 2); // Реалізація арифметичного виразу

    printf("\n============================");
    printf("\nРезультат: z = %9.5f", z);
    printf("\n============================\n");

    return 0;
}

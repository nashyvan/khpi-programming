#include <stdio.h>

int main() {
    int k;
    int x, y;

    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);
    printf("\n\n");

    k = 0;

    while (y > x) {
        y = y - x;
        k = k + 1;
        printf("Ітерація No%d\n", k);
        printf("============================\n");
        printf("Значення змінної x = %d\n", x);
        printf("Значення змінної y = %d\n\n", y);
    }
    return 0;
}
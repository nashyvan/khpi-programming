#include <stdio.h>

int main() {
    int x;
    int n;

    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("============================\n");
    printf("Значення x = %d\n", x);

    n = 0;

    while (x > 10) {
        n = n + 1;
        printf("============================\n");
        printf("Ітерація No%d\n", n);
        x = x / 10;
        printf("Значення змінної x = %d\n", x);
    }

    return 0;
}
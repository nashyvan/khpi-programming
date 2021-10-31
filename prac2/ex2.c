#include <stdio.h>

int main() {

    int k;
    int x, y;
    x = 1;
    y = 5;
    k = 0;

    while (y > x) {
        y = y - x;
        k = k + 1;
    }

    printf("===================================\n");
    printf("Кількість ітерацій циклу k = %d\n", k);
    printf("===================================\n");
    printf("Значення змінної x = %d\n", x);
    printf("Значення змінної y = %d\n", y);

    return 0;
}

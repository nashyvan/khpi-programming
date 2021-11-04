#include <stdio.h>

int main() {
    printf("Кодування символiв (CP866):\n\n");
    printf(" ");
    for (int i = 32; i <= 255; i++) {
        if (i % 10 == 0) {
            printf("\n\n");
        }
        printf("%2c %4d", i, i);
    }
    printf("\n");

    return 0;
}
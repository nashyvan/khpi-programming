#include <stdio.h>

int main() {
    int k;
    int P;

    k = 0;
    P = 0;

    while (k < 5) {
        P = P + 2;
        k = k + 1;
    }
    printf("Значення P після виконання циклу: %d\n", P);

    return 0;
}

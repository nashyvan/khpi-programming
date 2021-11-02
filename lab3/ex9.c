#include <stdio.h>

int main() {
    printf("Тип int має розмір %2d байт.\n", sizeof(int));
    printf("Тип char має розмір %2d байт.\n", sizeof(char));
    printf("Тип long має розмір %2d байт.\n", sizeof(long));
    printf("Тип long long має розмір %2d байт.\n", sizeof(long long));
    printf("Тип double має розмір %2d байт.\n", sizeof(double));
    printf("Тип long double має розмір %2d байт.\n", sizeof(long double));

    return 0;
}
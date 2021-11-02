#include <stdio.h>

int main() {
    printf("Тип int має розмір %2d байт.\n", sizeof(int));
    printf("Тип signed long long int має розмір %2d байт.\n", sizeof(signed long long int));
    if ( sizeof(int) > sizeof(signed long long int) ) {
        printf("\nТип int більше ніж тип signed long long int");
    } else {
        printf("\nТип signed long long int більше ніж тип int\n");
    }

    return 0;
}
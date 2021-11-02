#include <stdio.h>

int main() {
    float toobig = 3.4E38 * 100.0f;

    printf("Виводимо на консоль дуже велике значення\n");
    printf("%e\n", toobig);

    return 0;
}
#include <stdio.h>

int main() {
    unsigned char ch;

    printf("Введіть будь-який символ: ");
    scanf("%c", &ch);
    printf("Код символу %c = %d\n\n", ch, ch);

    for (int i = 32; i <= 255; i++) {
        if(i % 16 == 0) printf("\n");
        printf("%2c", i);
    }
    printf("\n");

    return 0;
}
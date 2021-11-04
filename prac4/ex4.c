#include <stdio.h>
#include <math.h>

int main() {
    printf("\n   Показники основних товар?в за 2018 р?к\n");
    printf("%c", 201);
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 8; i++) {
            printf("%c", 205);
        }
        printf("%c", 203);
    }
    for (int i = 0; i < 8; i++) {
        printf("%c", 205);
    }
    printf("%c\n", 187);
    printf("%c", 186);
    printf("  Номер ");
    printf("%c", 186);
    printf("  I кв. ");
    printf("%c", 186);
    printf(" II кв. ");
    printf("%c", 186);
    printf(" III кв.");
    printf("%c", 186);
    printf(" IV кв. ");
    printf("%c\n", 186);
    printf("%c", 204);
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 8; i++) {
            printf("%c", 205);
        }
        printf("%c", 206);
    }
    for (int i = 0; i < 8; i++) {
        printf("%c", 205);
    }
    printf("%c\n", 185);

    int i1, i2, i3;
    i1 = 1;
    i2 = 6;
    i3 = 2;

    for (int i = 0; i < 4; i++) {
        printf("%c%5d   %c%5d   %c%5d   %c%5d   %c%5d   %c\n",
               186, i1, 186, i2, 186, i3, 186, (int)pow(2,i),
               186, (i % 2 == 0) ? 7 : 5, 186);
        i1++;
        i2--;
        i3 += 2;
    }
    printf("%c", 200);
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 8; i++) {
            printf("%c", 205);
        }
        printf("%c", 202);
    }
    for (int i = 0; i < 8; i++) {
        printf("%c", 205);
    }
    printf("%c\n", 188);
    printf("\n");

    return 0;
}

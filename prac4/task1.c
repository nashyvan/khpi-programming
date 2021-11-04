#include <stdio.h>
#include <math.h>

int main() {
    printf("\n   Показники основних товар?в за 2018 р?к\n");
    printf("%c", 218); // left top
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 8; i++) {
            printf("%c", 196); // top border
        }
        printf("%c", 194);
    }
    for (int i = 0; i < 8; i++) {
        printf("%c", 196); // top border
    }
    printf("%c\n", 191); // right top
    printf("%c", 179);
    printf("  Номер ");
    printf("%c", 179);
    printf("  I кв. ");
    printf("%c", 179);
    printf(" II кв. ");
    printf("%c", 179);
    printf(" III кв.");
    printf("%c", 179);
    printf(" IV кв. ");
    printf("%c\n", 179);
    printf("%c", 195);
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 8; i++) {
            printf("%c", 196); // center line
        }
        printf("%c", 197);
    }
    for (int i = 0; i < 8; i++) {
        printf("%c", 196); // center line
    }
    printf("%c\n", 180);

    int i1, i2, i3;
    i1 = 1;
    i2 = 6;
    i3 = 2;

    for (int i = 0; i < 4; i++) {
        printf("%c%5d   %c%5d   %c%5d   %c%5d   %c%5d   %c\n",
               179, i1, 179, i2, 179, i3, 179, (int)pow(2,i),
               179, (i % 2 == 0) ? 7 : 5, 179);
        i1++;
        i2--;
        i3 += 2;
    }
    printf("%c", 192); // left bottom
    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 8; i++) {
            printf("%c", 196); // bottom border
        }
        printf("%c", 193);
    }
    for (int i = 0; i < 8; i++) {
        printf("%c", 196); // bottom border
    }
    printf("%c\n", 217); // right bottom
    printf("\n");

    return 0;
}

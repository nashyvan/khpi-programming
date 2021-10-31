#include <stdio.h>

// for loop is easier than do while

int main() {
//    int s = 0;
//
//    for (int i = 1; i <= 20; i += 2) {
//        s += i;
//        printf("+ %d \n", i);
//    }
//    printf("Sum is %d", s);

    int s = 1;
    int i = 1;

    printf("+ %d \n", i);
    do {
        i += 2;
        printf("+ %d \n", i);
        s += i;
    } while (i < 19);
    printf("Sum is %d", s);

    return 0;
}
#include <stdio.h>

int main() {
    int x = 100;
    printf("десяткове = %d\n"
           "вісімкове = %o\n"
           "шістнадцяткове = %x\n\n\n", x, x, x);
    printf("десяткове = %d\n"
           "вісімкове      = %#o\n"
           "шістнадцяткове = %#x\n", x, x, x);

    return 0;
}
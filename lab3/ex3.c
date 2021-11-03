#include <stdio.h>

int main() {
    int i = 2147483647;
    unsigned int j = 4294967295;

    printf("%11d %11d %11d\n", i, i+1, i+2);
    printf("%11u %11u %11u\n", j, j+1, j+2);

    return 0;
}

#include <stdio.h>

int main() {
    unsigned int        un = 3000000000;
    short               end = 200;
    long                big = 65537;
    long long           verybig = 12345678908642;

    printf("un = %u, але не %d\n", un, un);
    printf("end = %hd і %d\n", end, end);
    printf("big = %ld, але не %hd\n", big, big);
    printf("verybig = %lld, але не %ld\n", verybig, verybig);

    return 0;
}
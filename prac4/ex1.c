#include <stdio.h>

int main() {
    float salary;

    printf("\aВведiть бажану суму плати на мiсяць:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t\t$%.2f на мiсяць вiдповiдає $%.2f на рiк.",
           salary, salary*12.0);
    printf("\rНепогано!\n");

    return 0;
}
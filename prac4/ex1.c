#include <stdio.h>

int main() {
    float salary;

    printf("\a����i�� ������ ��� ���� �� �i����:");
    printf(" $_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t\t$%.2f �� �i���� �i����i��� $%.2f �� �i�.",
           salary, salary*12.0);
    printf("\r��������!\n");

    return 0;
}
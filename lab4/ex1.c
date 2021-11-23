#include <stdio.h>
#include <stdlib.h>

int main() {
    float a, b, c;
    char op;

    puts("=================================================");
    puts(" Програма обчислює значення арифметичного виразу ");
    puts("=================================================");
    puts(" Можна використовувати операції: +, -, *, /      ");
    puts(" Формат вводу: оп_1 операція оп_2 (Enter)        ");
    puts("=================================================");
    printf(" Введіть вираз: ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op) {
        case '+':
            c = a + b;
            break;
        case '-':
            c = a - b;
            break;
        case '/':
            if (b != 0.0) {
                c = a / b;
            } else {
                printf("Помилка: ділення на нуль");
                exit(1);
            }
            break;
        case '*':
            c = a * b;
            break;
        default:
            printf("Немає визначених операцій");
            exit(1);
    }
    printf("\n %.6f %c %.6f = %.6f\n", a, op, b, c);

    return 0;
}
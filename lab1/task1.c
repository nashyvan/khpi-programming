#include <stdio.h>
#include <math.h>   // Для функції sqrt()
// #include <windows.h>    // Для функцій SetConsoleCP() і SetConsoleOutputCP()

int main(void)
{
    float a, b, c, p, S;

    // SetConsoleCP(1251);
    // SetConsoleOutputCP(1251);
    printf("Введіть довжину сторони а: ");
    scanf("%f",&a);
    printf("Введіть довжину сторони b: ");
    scanf("%f",&b);
    printf("Введіть довжину сторони c: ");
    scanf("%f",&c);

    if ( (a>0) && (b>0) && (c>0) && (a+b>c) && (a+c>b) && (b+c>a) ) {
        p = (a + b + c) / 2;    // Знаходимо півпериметр
        // Обчислюємо площу трикутника
        S = sqrtf(p * (p - a) * (p - b) * (p - c));
        printf("\n===============================\n");
        printf("Площа трикутника = %5.3f\n", S);
        printf("===============================\n");
    } else {
        printf("\n===============================\n");
        printf("\n\nДані введені з помилками\n");
        printf("===============================\n");
    }
    return 0;
}
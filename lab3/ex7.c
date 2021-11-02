#include <stdio.h>

void __mingw_printf(const char *string, long double dip, long double dip1);

int main() {
    float           aboat = 32000.0;
    double          abet = 2.14e9;
    long double     dip = 5.32e-5;

    printf("%f може бути записано як %e\n", aboat, aboat);
    printf("Та його %a в шістнадцятковій формі запису\n", aboat);
    printf("%f може бути записано як %e\n", abet, abet);
    __mingw_printf("%lf може бути записано як %le\n", dip, dip);

    return 0;
}

void __mingw_printf (const char *string, long double dip, long double dip1) {

}

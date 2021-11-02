#include <stdio.h>
#include <inttypes.h>

int main() {
    int32_t me32;
    me32 = 45933945;

    printf("Спочатку припустимо, що int32_t є int: ");
    printf("me32 = %d\n", me32);
    printf("Далі не будемо робити жодних припущень.\n");
    printf("Замість цього скористаємося \""
           "макросом\" з файлу inttypes.h: ");
    printf("me32 = %"PRId32"\n", me32);

    return 0;
}
#include <stdio.h>

int main() {
    int f;
    float c;

    printf("=======================\n");
    printf(" FAHRENHEIT |  CELSIUS \n");
    printf("=======================\n");

    for (f = 50; f <= 150; f++) {
        c = 5.0 * (f - 32) / 9.0;
        printf("   %d F    |  %.2f C\n", f, c);
    }

    printf("=======================\n");
    return 0;
}
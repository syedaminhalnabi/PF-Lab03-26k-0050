#include <stdio.h>

int main() {
    float number;

    printf("Enter a floating-point number: ");
    scanf("%f", &number);

    printf("With one decimal place: %.1f\n", number);
    printf("With three decimal places: %.3f\n", number);

    return 0;
}

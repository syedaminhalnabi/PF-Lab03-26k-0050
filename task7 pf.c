#include <stdio.h>

int main() {
    char city[50];
    char country[50];
    long long population;
    float area;
    char grade;

    printf("Enter your city: ");
    scanf("%49s", city);

    printf("Enter your country: ");
    scanf("%49s", country);

    printf("Enter population: ");
    scanf("%lld", &population);

    printf("Enter area (in km^2): ");
    scanf("%f", &area);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("\n--- Information ---\n");
    printf("City: %s\n", city);
    printf("Country: %s\n", country);
    printf("Population: %lld\n", population);
    printf("Area: %.2f km^2\n", area);
    printf("Grade: %c\n", grade);

    return 0;
}

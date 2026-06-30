#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14159265359;

    printf("Input: Radius = ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    float circumference = 2 * PI * radius;

    printf("Output: Area = %.2f, Circumference = %.2f\n", area, circumference);

    return 0;
}
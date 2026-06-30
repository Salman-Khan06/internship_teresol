#include <stdio.h>

int main() {
    float radius;
    const float PI = 3.14159265359;

    printf("Input: Radius = ");
    scanf("%f", &radius);

    const float area = PI * radius * radius;
    const float circumference = 2 * PI * radius;

    printf("Output: Area = %.2f, Circumference = %.2f\n", area, circumference);

    return 0;
}
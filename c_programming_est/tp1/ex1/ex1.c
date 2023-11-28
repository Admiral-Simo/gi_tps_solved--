#include <stdio.h>
#include <math.h>

float delta(float a, float b, float c);

int main() {
    float a, b, c;
    printf("Enter numbers to solve the equation: \n");
    printf("a: ");
    scanf("%f", &a);
    printf("b: ");
    scanf("%f", &b);
    printf("c: ");
    scanf("%f", &c);
    float dt = delta(a, b, c);
    if (dt < 0) {
        printf("There is no solution in R.");
    } else if (dt == 0) {
        printf("There is only one solution x = %f.", -b / (2 * a));
    } else {
        printf("There is two solutions x1 = %f & x2 = %f.\n", (-b + sqrt(dt)) / (2 * a), (-b - sqrt(dt)) / (2 * a));
    }
    return 0;
}

float delta(float a, float b, float c) {
    return pow(b, 2) - 4 * a * c;
}
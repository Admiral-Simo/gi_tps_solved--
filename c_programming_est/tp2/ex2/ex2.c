#include <stdio.h>
#include <math.h>

float puissance(float x, int n) {
    float s = 1;
    int i;
    for(i = 0; i < n; i++) {
        s *= x;
    }
    return s;
}

int factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    float prev, now = 1, x;
    int n = 1;
    printf("Enter an input to exponential.\n");
    printf("x: ");
    scanf("%f", &x);
    do {
        prev = now;
        now += puissance(x, n) / (float) factorial(n);
        n++;
    } while(fabsf(prev - now) > 0.001);
    printf("expo(%f) = %0.6f\n", x, now);
    return 0;
}
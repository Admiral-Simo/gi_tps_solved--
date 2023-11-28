// continue condition fabsf(prev - now) > 0.001 && p < 100
#include <stdio.h>
#include <math.h>

int factorial(int n) {
    if (n == 1 || n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    float now = 1, prev, p=1;
    do {
        prev = now;
        now = prev + 1.0 / factorial(p);
        p++;
    } while (fabsf(prev - now) > 0.001 && p < 100);

    printf("approximation of deuler is %f\n", now);

    return 0;
}
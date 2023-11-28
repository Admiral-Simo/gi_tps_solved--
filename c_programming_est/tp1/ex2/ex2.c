// Un+1=1/2*(Un+a/Un).
// U0 = 1.
#include <stdio.h>
#include <math.h>

int main() {
    float prev, now = 1, a;
    printf("Enter a value of: \n");
    printf("a: ");
    scanf("%f", &a);
    do {
        prev = now;
        now = 0.5 * (prev + (a/prev));
    } while(fabsf(prev - now) > 0.001);
    printf("The square root of accuracy 0.001 is %f.\n", now);
}
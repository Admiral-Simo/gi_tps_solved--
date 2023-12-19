// U1 = 1 U2 = 1; for n > 2 Un = Un-1 + Un-2

// lecture de n ✅
// recursion fibonacci ✅
// not recursive fibonacci ✅
// function that shows the Un   ✅
// main function that plays with all of the above ✅

#include <stdio.h>

void lecture(int* n) {
    printf("Enter a value for n: ");
    scanf("%d", n);
}

int fib_recursive(int n) {
    if (n == 1 || n == 2) return 1;
    return fib_recursive(n-1) + fib_recursive(n-2);
}

int fib_normal(int n) {
    if (n == 1 || n == 2) return 1;
    else {
        int prev1 = 0, prev2 = 1, current;
        for(int i = 2; i <= n; i++) {
            current = prev1 + prev2;
            prev1 = prev2;
            prev2 = current;
        }
        return current;
    }
}

void show_results(int n) {
    printf("The recursive result is: %d\n", fib_recursive(n));
    printf("The not recursive result is: %d\n", fib_normal(n));
}

int main() {
    int n;
    lecture(&n);
    show_results(n);
    return 0;
}
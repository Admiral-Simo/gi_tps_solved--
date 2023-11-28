#include <stdio.h>

void lire(int A[], int n) {
    printf("Enter all elements of the Array.\n");
    int i;
    for(i = 0; i < n; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &A[i]);
    }
}

void afficher(int A[], int n) {
    printf("all elements of the Array is: \n");
    int i;
    for(i = 0; i < n; i++) {
        printf("%d: %d\n",i+1, A[i]);
    }
    printf("\n");
}

void trier(int A[],int d) {
    int i, j, x;
    for(i = 0; i < d - 1; i++) {
        for(j = 0; j < d - i - 1; j++) {
            if (A[j] > A[j+1]) {
                x = A[j];
                A[j] = A[j+1];
                A[j+1] = x;
            }
        }
    }
}

int rechercher(int A[],int d,int elt) {
    int left = 0, right = d - 1, mid;
    while(right >= left) {
        mid = (right + left) / 2;
        if (A[mid] == elt) {
            return 1;
        }
        if (A[mid] > elt) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return 0;
}

int main() {
    int Arr[10], n = sizeof(Arr) / sizeof(float), elt;

    lire(Arr, n);
    afficher(Arr, n);
    trier(Arr, n);
    afficher(Arr, n);
    printf("Enter an element: ");
    scanf("%d", &elt);
    if (rechercher(Arr, n, elt)) {
        printf("%d is available.\n", elt);
    } else {
        printf("%d is unavailable.\n", elt);

    }
}
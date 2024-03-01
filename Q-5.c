#include <stdio.h>

void sum_arrays(int *a, int *b, int *c, int n) {
    for (int i = 0; i < n; i++) {
        c[i] = a[i] + b[i];
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int arr1[n], arr2[n], sum[n];

    printf("\nEnter elements in the first array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("\nEnter elements in the second array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    sum_arrays(arr1, arr2, sum, n);

    printf("\nSum of the two arrays is:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", sum[i]);
    }

    return 0;
}
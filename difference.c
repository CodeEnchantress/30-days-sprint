#include <stdio.h>

int main() {
    int n, i, j;
    printf("Enter the order of matrices: ");
    scanf("%d", &n);

    printf("Enter the elements for the first matrix:\n");
    int arr1[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements for the second matrix:\n");
    int arr2[n][n];
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr2[i][j]);
        }
    }

    
    int arr[n][n];
    printf("The difference of the two matrices is:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            arr[i][j] = arr1[i][j] - arr2[i][j];
            printf("%d ", arr[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}

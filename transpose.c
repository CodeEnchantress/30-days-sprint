#include<stdio.h>

int main() {
    int n, t=0;
    
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    
    int arr[n][n];
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]); 
        }
    }

    // Transposing the matrix
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { 
            t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }

    printf("Transpose of matrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]); 
        }
        printf("\n"); 
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    int arr[n][n];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    int symmetric = 1; 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] != arr[j][i]) { 
                symmetric = 0; 
                break;
            }
        }
        if (!symmetric) {
            break; 
        }
    }

    if (symmetric) {
        printf("The matrix is symmetric.\n");
    } else {
        printf("The matrix is not symmetric.\n");
    }

    return 0;
}

#include <stdio.h>

int main() {
    int n;
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);

    int matrix[n][n];


    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < n; i++) {
        printf("Enter elements for row %d: ", i + 1);
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    
    int largestSum = 0;
     int rowSum = 0;
    for (int i = 0; i < n; i++) {
        
        for (int j = 0; j < n; j++) {
            rowSum = rowSum+ matrix[i][j];
        }
        if ( i ==0 ||rowSum > largestSum) {
            largestSum = rowSum;
        }
    }

    
    printf("The largest sum of individual row elements is: %d\n", largestSum);

    return 0;
}

// find the largest and smallest element in the matirx 
#include<stdio.h>

int main() {
    int n;
    
    printf("Enter the order of the matrix: ");
    scanf("%d", &n);
    
    int arr[n][n];
    
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    int largest = arr[0][0];
    int smallest = arr[0][0];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
            if (arr[i][j] < smallest) {
                smallest = arr[i][j];
            }
        }
    }

    printf("Largest element in the matrix: %d\n", largest);
    printf("Smallest element in the matrix: %d\n", smallest);

    return 0;
}

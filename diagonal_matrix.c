

#include<stdio.h>

int main() {
    int n, c = 0; 
    printf("Enter the size of the matrix: ");
    scanf("%d", &n);
    
    int arr[n][n];
    printf("Enter the elements:\n");
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
             scanf("%d", &arr[i][j]);
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && arr[i][j] != 0) {
                printf("Not a diagonal matrix.\n");
            return 0;
            }
        }
    }
    
    printf("Diagonal matrix.\n");
    
    return 0;
}

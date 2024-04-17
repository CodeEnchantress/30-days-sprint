#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of rows: ");
    scanf("%d", &n);
    int m;
    printf("Enter the number of columns: ");
    scanf("%d", &m);

    printf("Enter the elements:\n");
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    
    int unique;
    printf("Unique elements in the matrix: ");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            unique = 1; 
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < m; l++) {
                    if ((arr[i][j]==arr[k][l]) && (i!=k ||j!=l)) {
                        unique = 0; // Found a duplicate
                        break;
                    }
                }
                if (!unique) break;
            }
            if (unique) {
                printf("%d ", arr[i][j]); // Print the unique element
            }
        }
    }
    printf("\n");

    return 0;
}

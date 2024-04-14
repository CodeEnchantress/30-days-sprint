// sum of 2d array


#include <stdio.h>

int main() {
    int n, m;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Calculate the sum of elements
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
    }

    printf("Sum of elements in the 2D array: %d\n", sum);

    return 0;
}

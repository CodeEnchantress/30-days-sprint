//input a 2d array and input a row by the user to find its sum
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

    int row;
    printf("Enter the row index (0 to %d): ", n - 1);
    scanf("%d", &row);

    if (row < 0 || row >= n) {
        printf("Invalid row index!\n");
        return 1;
    }

    // Calculate the sum of elements in the specified row
    int sum = 0;
    for (int j = 0; j < m; j++) {
        sum += arr[row][j];
    }

    printf("Sum of elements in row %d: %d\n", row, sum);

    return 0;
}

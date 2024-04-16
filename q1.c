#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size for the first matrix: ");
    scanf("%d", &n);

    printf("Enter the elements for the matrix:\n");
    int arr1[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr1[i][0]);
    }

    printf("\n");
    for (int j = 0; j < n; j++)
    {
        printf("%d", arr1[0][j]);
    }
    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d", arr1[i][n - 1]);
    }
    printf("\n");
    for (int j = 0; j < n ; j++)
    {
        printf("%d", arr1[n - 1][j]);
    }

    return 0;
}
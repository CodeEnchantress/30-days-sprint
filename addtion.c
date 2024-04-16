#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the size for the first matrix: ");
    scanf("%d", &n);

    printf("Enter the size for the second matrix: ");
    scanf("%d", &m);

    if (n != m)
    {
        printf("must have same size\n ");
        return 1;
    }

    int arr1[n][n];
    int arr2[n][n];
    int sum[n][n];

    printf("Enter the elements for the first matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter the elements for the second matrix:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    printf("The sum of the two matrices is:\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum[i][j] = arr1[i][j] + arr2[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}

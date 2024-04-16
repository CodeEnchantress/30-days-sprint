// input a matrix and print its both principal and secondary diagonal
#include <stdio.h>
int main()
{
    int n;
    printf("enter the size of matrix");
    scanf("%d", &n);

    // elements
    int matrix[n][n];
    printf("enter the elements of the matrix ");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    // principal diagonal

   
    // 2ndry diagonal
    

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)

        {
            if (i == j || i + j == n - 1)
            {
                printf("%d ", matrix[i][j]);
            }
            else
            {

                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
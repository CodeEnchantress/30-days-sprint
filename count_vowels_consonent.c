#include <stdio.h>
int main()
{
    int n, m;
    printf("enter the size of rows : ");
    scanf("%d", &n);
    printf("enter the size of col : ");
    scanf("%d", &m);

    char arr[n][m];
    printf("enter the elements \n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf (" %c", &arr[i][j]);
        }
    }
    int vowels = 0, consonents = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr[i][j] == 'a' || arr[i][j] == 'e' || arr[i][j] == 'i' || arr[i][j] == 'o' || arr[i][j] == 'u')
            {
                vowels++;
            }
            else if (arr[i][j]>=97 && arr[i][j]<=122)
            {
                consonents++;
            }
        }
    }

    printf("number of vowels are %d", vowels);
    printf("number of consonents are %d", consonents);

    return 0;
}
// input two array of equal size and calc and store index sum into third index

#include <stdio.h>
int main()
{
    int arr1[10], arr2[10], arr3[10];
    printf("enter the elements of first array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter the elements for 2nd array");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("the sum of every index value is ");
    for (int i = 0; i < 10; i++)
    {
        arr3[i] = arr1[i] + arr2[i];
        printf(" %d\n", arr3[i]);
    }
     return 0;
}
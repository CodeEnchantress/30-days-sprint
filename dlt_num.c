//input an array and then input a num to dlt from array 
#include<stdio.h>
int main()
{    int n ;
     printf("enter the size of an array ");
     scanf ("%d", &n);
    

    printf("enter the elements");
    int arr[n];
    for (int i=0; i<n;i++){
         scanf ("%d", &arr[i]);

    }

    printf("enter the index of the num you want to dlt ");
    int num_index;
    scanf("%d",&num_index);

    for (int i= num_index; i <n; i++){
          arr[i]= arr[i+1];
            
         }
         n--;


        for (int i=0; i <n; i++){
            printf("%d",arr[i]);
            printf("\n");
        }
    }



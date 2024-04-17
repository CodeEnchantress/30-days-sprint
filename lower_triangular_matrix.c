#include<stdio.h>
int main (){
     int n ; 
     printf("enter the order:  ");
     scanf ("%d", &n);
     printf("enter the elements");
     int arr[n][n];
     for (int i =0; i <n; i++){
         for (int j =0; j <n ; j++){
             scanf("%d", &arr[i][j]);
         }
     }
    for (int i=0; i<n; i++){
         for (int j =0; j<n; j++){
            if (j<=i){
                printf("%d ", arr[i][j]);

            }
            else{
                 printf(" ");
            }
           
         }
          printf("\n");
    }
    return 0;
}
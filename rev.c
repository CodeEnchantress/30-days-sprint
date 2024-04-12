// input an array  and reverse it 
#include<stdio.h>
 int main (){
     int n ;
     printf("enter the value ");
      scanf ("%d", &n);
     int arr[n];
     printf("enter the elements ");
      for (int i =0; i <n; i++){
         scanf ("%d", &arr[i]);
         
      }

      // print the array 
      printf("the original array ");
       for ( int i =0; i <n; i++){
         printf("%d", arr[i]);

       }
       // the reversed array 
       printf("reversed array is ");
       for (int i=n-1; i>=0; i--){
         printf("%d", arr[i]);
       }
        return 0;
 }
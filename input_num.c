// input a num in an array at a particular index
#include<stdio.h>
int main (){
     printf("enter the size of an array ");
     int n ;
     scanf ("%d", &n);

     printf("enter the elements");
     int arr[n];
    for ( int i =0; i <n; i++){
         scanf ("%d", arr[i]);

    }
    int num_index;
     printf("enter the index ");
      scanf ("%d", &num_index);

      int num_value;
      printf("enter the value");
      scanf ("%d", &num_value );

      for ( int i=n; i >num_index; i--){
         arr[i]= arr[i-1];
      }
       arr[ num_index]= num_value;
       n++;
       
       printf("now the array is ");
       for (int i=0; i <n; i++){
        printf("%d", arr[i]);
       }



}
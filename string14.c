// check anagram or not 
#include<stdio.h>
#include<string.h>
 int main (){
     char str[100], atr[100] ;
      int n, m , flag=0;
     printf("enter 1st string: ");
     gets(str);
     printf("enter 2nd string: ");
     gets(atr);
     n=strlen(str);
     m=strlen(atr);
     if (n==m){
         printf("same sized string  ");

     }
     else {
         printf("not same ");
         flag=0;
     }
     for (int i=0; i<n-1;i++){
         for (int j=0; j <m-i-1; j++)
         {
             if (str[j]>str[j+1]){
                 char temp =str[i];
                 str[j]= str[j+1];
                 str[j+1]= temp;
             }
         }
     }
     for (int i=0; i<n; i++){
        for (int j=0; j<m; j++){
            if (str[i]!=atr[j])
            return 0;
        }
     }
 }
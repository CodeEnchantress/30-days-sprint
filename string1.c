#include<stdio.h>
 int main (){
     char str[]= " my name is priyanka joshi\0";
     int i =0;
     while (str[i]!='\0'){
       printf("%c", str[i]);
        i++;
        
     }
      return 0;

      }